#include<stdio.h>
#define size 5
int main()
{
    int bill[size]={},i=0,ele=0,ele_cnt=0;
    for(i=0; i<size ;i++)
    {
        printf("\nEnter bill no. %d= ",i+100);
        scanf("%d",&bill[i]);
    }
    printf("\n Enter an amount whose count you want = ");
    scanf("%d",&ele);
    printf("\n ****************List of Bill********************");
    for(i=0; i<size ;i++)
    {
         printf("\nAmount of %d bill = %d ",i+1,bill[i]);
         if(bill[i]==ele)
         {
           ele_cnt++;
         }
    }
    printf("\n\n ***********************************************");
    printf("\n\n Given Amount count in array= %d ",ele_cnt);
    return(0);
}
