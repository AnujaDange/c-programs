#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,x;
 printf("\n************program to print M************");
 printf("\nEnter row size => ");
 scanf("%d",&x);
 for(i=1 ; i<=x ; i++)
    {
   for(j=1 ; j<=x ; j++)
      {
    if(i==j && i+j<=x+1 ||  i+j==x+1 && i<=j || j==1 || j==x)
       {
        printf("  * ");
       }
       else
       {
        printf("    ");
        }
        }
     printf("\n");
    }
    return(0);
  }
