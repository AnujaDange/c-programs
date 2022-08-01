#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r;
    printf("\n Enter size for row=>");
    scanf("%d",&r);
    for(i=1 ; i<=r ; i++)
    {
        for(j=1 ; j<=r ; j++)
        {
            if(j==1 || j==r || i==j)
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
