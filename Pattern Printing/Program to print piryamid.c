#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    printf("\nEnter size for row=>");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i+j>=x+1)
            {
                printf(" * ");
            }
            printf("   ");
        }
        printf("\n");
    }
    return(0);
}
