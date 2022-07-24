#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,r;
    printf("Enter range to print series=> ");
    scanf("%d ",&r);
    for(i=0;i<=r;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return(0);
}
