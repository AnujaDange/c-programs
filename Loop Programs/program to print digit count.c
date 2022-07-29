#include<stdio.h>
int main()
{
    int no,dcnt;
    printf("\nEnter positive number= ");
    scanf("%d",&no);
    while(no>0)
    {
        no=no/10;
        dcnt++;
    }
    printf("\n Digits in given number=%d",dcnt);
    return(0);
}
