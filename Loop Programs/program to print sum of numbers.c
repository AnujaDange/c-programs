#include<stdio.h>
int main()
{
    int num,sum=0,rem=0;
    printf("Enter postive number=");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("\nsum of digit=%d",sum);
    return(0);

}
