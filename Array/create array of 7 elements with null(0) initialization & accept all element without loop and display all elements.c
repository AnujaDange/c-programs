#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[7]={ };
    printf("\n 1st Array element=>%d",arr[0]);
    printf("\n 2nd Array element=>%d",arr[1]);
    printf("\n 3rd Array element=>%d",arr[2]);
    printf("\n 4th Array element=>%d",arr[3]);
    printf("\n 5th Array element=>%d",arr[4]);
    printf("\n 6th Array element=>%d",arr[5]);
    printf("\n 7th Array element=>%d",arr[6]);
    getch();
    arr[0]=28;
    arr[1]=30;
    arr[2]=45;
    arr[3]=50;
    arr[4]=10;
    arr[5]=60;
    arr[6]=17;
    arr[7]=25;
    printf("\n\n value of 1st array=%d ",arr[0]);
    printf("\n value of 2nd array=%d ",arr[2]);
    printf("\n value of 3rd array=%d ",arr[3]);
    printf("\n value of 4th array=%d ",arr[4]);
    printf("\n value of 5th array=%d ",arr[5]);
    printf("\n value of 6th array=%d ",arr[6]);
    printf("\n value of 7th array=%d ",arr[7]);
    getch();
    return(0);
}
