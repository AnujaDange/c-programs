#include<stdio.h>
int main()
{
    int num,rev=0,n,rem=0;
    printf("Enter postive number=");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("\nReverse number = %d",rev);
    if(n==rev)
    {
        printf("\n\n%d is Palindrome ",n);
    }
    else
    {
        printf("\n\n%d is not Palindrome\n",n);
    }
    return(0);
}
