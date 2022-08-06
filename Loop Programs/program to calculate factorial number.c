#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter any number=>");
    scanf("%d",&n);
    for(i=1 ;i<=n ;i++)
    {
      fact=fact*i;
    }
     printf("\n factorial of %d is = %d\n",n,fact);
    return(0);
}
