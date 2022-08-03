#include<stdio.h>
#define size 5
int main()
{
    int bill[size]={},sum=0,i=0,max=0;
    for(i=0;i<size;i++)
    {
      printf("\n Enter bill Amount=>");
      scanf("%d",&bill[i]);
      if((i==0) || (max<bill[i]))
         {
             max=bill[i];
         }
      sum=sum+bill[i];
    }
    printf("\n **************List of Bill*****************");
    for(i=0;i<size;i++)
    {
        printf("\n Amount of %d bill=>%d ",i+1,bill[i]);
    }
    printf("\n **************List of Bill*****************");
    printf("\n\n Total Bill Amount=>%d",sum);
    printf("\n\n Maximum Bill Amount=>%d\n\n",max);

    return(0);
}
