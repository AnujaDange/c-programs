#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    printf("\n============program to print I=============");
    printf("\n Enter size of row =>");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
           if(i==1 || i==x || j==(x/2)+3)
           {
              printf(" * ");
           }
           printf("   ");
        }
        printf("\n");
    }
    return(0);
}
