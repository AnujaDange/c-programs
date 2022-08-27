#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    printf("\nEnter size for row =>");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i==j && i+j<=x+1 || i+j==x+1 && i<=j || j==(x/2) && i+j>=x+1)
            {
                printf("*");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return(0);
}
