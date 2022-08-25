#include<stdio.h>
int main()
{
    int i=0,j=0,x=0;
    printf("\n Enter pattern size => ");
    scanf("%d",&x);
    for(i=1 ; i<=x ; i++)
    {
      printf("\t\t");
      for(j=1 ; j<=x ; j++)
      {
          if((i>=j && (x+1>=i+j)) || ((i+j) >= (x+1) && (i<=j)) || ((x+1)/4==i) && ((j==((x+1)/2)-1) || ((j==((x+1)/2)+1))) || ((j==((x+1)/2) && (i>(x+1)/4))))
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
