#include<stdio.h>
#define size 7
int main()
{
    int arr[size]={0},i=0;
    for(i=0;i<size;i++)
    {
        printf("\n %d Array element=>",i+1);
        scanf("%d",&arr[i]);
    }
    getch();
    printf("\n\n**************::Elements in Array::******************\n");

    for(i=0;i<size;i++)
    {
        printf("\n value of %d array=%d ",i+100,arr[i]);
    }

    return(0);
}


