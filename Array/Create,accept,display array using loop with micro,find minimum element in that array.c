#include<stdio.h>
#define size 5
 int main()
 {
    int bill[size]={0},min=0,i=0;
    for(i=0; i<size; i++)
    {
        printf("\n Enter Bill No. %d= ",i+101);
        scanf("%d",&bill[i]);
    }
    printf("\n **************Bills Generated Today**************");
    for(i=0; i<size; i++)
    {
        printf("\n Amount of %d Bill = %d",i+1,bill[i]);
        if(i==0 || min>bill[i])
        {
            min=bill[i];
        }
    }
    printf("\n\n*****************************************************");
    printf("\n Minimum Amount of Bill=> %d \n",min);
    return(0);
 }

