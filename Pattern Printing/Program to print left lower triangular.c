#include<stdio.h>
int main()
{
    int x,r,c;
    printf("\n Enter size for row=> ");
    scanf("%d",&x);
    for(r=1;r<=x;r++)
    {
        for(c=1;c<=x;c++)
        {
            if(r>=c || r==c)
            {
                printf("*");
            }
            printf("  ");
        }
        printf("\n");
    }
    return(0);
}
