#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,x;
    printf("\nEnter size for row =>");
    scanf("%d",&x);
    for(r=1;r<=x;r++)
    {
        for(c=1;c<=x;c++)
        {
            if(r==1 || c==(x/2)+1)
            {
                printf("*");
            }
            printf("   ");
        }
        printf(" \n ");
    }
    return(0);
}
