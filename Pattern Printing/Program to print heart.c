#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    printf("\nEnter 5 to print size of row for heart =>");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
         if(i==1 && j==5 || i==1 && j==1 || i==1 && j==3 || i+j>=9 || i-j>=3)
         {
           printf("   ");
         }
         else
         {
          printf(" * ");
         }
        }
        printf("\n");
    }

    return(0);
}
