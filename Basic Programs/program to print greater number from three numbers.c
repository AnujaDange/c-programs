#include<stdio.h>
 int main()
 {
    int a,b,c;
    printf("\nEnter three numbers=> ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n %d is maximum.",a);
        }
        else
        {
            printf("\n %d is maximum.",c);
        }
    }
    else if(b>c)
    {
       printf("\n %d is maximum.",b);
    }
    else
    {
         printf("\n %d is maximum.",c);
    }
    return(0);
 }
