#include<stdio.h>
int main()
 {
    int no;
    printf("\n Enter a number =>");
    scanf("%d",&no);
    if(no%2==0)
    {
       printf("\n%d is even number",no);
    }
    else
    {
        printf("\n%d is odd number",no);
    }

    return(0);
 }

