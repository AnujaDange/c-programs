#include<stdio.h>
#include<conio.h>
int main()
{
    int SP,EP,r,c;
    printf("\nEnter starting point =>");
    scanf("%d",&SP);
    printf("\nEnter ending point =>");
    scanf("%d",&EP);
    printf("\n========================tables=============================\n\n");
    for(r=1;r<=10;r++)
    {
        for(c=SP;c<=EP;c++)
        {
            printf("\t%3d",r*c);
        }
        printf("\n");
    }
}
