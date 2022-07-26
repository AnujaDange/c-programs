#include<stdio.h>
int main()
{
    int i=1,sum=0,bills=0;
    for(i=1;i<=3;i++)
    {
        printf("\n Enter bill amount=> ",i+1);
        scanf("%d",&bills);
        sum=sum+bills;
    }
    printf("\n sum=%d",sum);
    return(0);
}
