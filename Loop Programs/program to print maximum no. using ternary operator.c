#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter two numbers=>");
    scanf("%d%d",&a,&b);
    (a==b)?printf("\n Both are same"):(a>b)?printf("\n %d is maximum"):printf("\n %d is minimum");
    return(0);
}
