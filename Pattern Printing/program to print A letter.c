#include<stdio.h>
#include<conio.h>
void display1(int x)
{
   int i,j;
   for(i=1;i<=x;i++)
   {
     for(j=1;j<=x;j++)
     {
       if(j==1 || j==6 || i==x/2 || i==1)

       {
        printf(" *");
       }
        else
       {
         printf("   ");
        }
       }
         printf("\n");
   }
  }
int main()
{
    int num;
    printf("\n Enter pattern size =>");
    scanf("%d",&num);
    display1(num);
    return(0);
}
