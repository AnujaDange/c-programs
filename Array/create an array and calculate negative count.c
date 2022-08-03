#include<stdio.h>
#define size 5
int main()
{
    int arr[size]={},n_cnt=0,i=0;
    for(i=0 ; i<size ; i++)
    {
        printf("\n Enter %d Bill Amount = ",i+101);
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            n_cnt++;
        }
    }
     for(i=0 ; i<size ; i++)
     {
         printf("\n Amount of %d Bill = %d ",i+101,arr[i]);
     }
    printf("\n\n Negative Count = %d",n_cnt);
    return(0);
}
