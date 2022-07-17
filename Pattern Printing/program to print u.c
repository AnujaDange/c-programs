#include<stdio.h>
#include<conio.h>
int main()
{
    int x,r,c;
    printf("\nEnter size for row=>");
    scanf("%d",&x);
    for(r=1;r<=x;r++)
    {
        for(c=1;c<=x;c++)
        {
            if(r==x || c==1 || c==x)
            {
                printf(" * ");
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
