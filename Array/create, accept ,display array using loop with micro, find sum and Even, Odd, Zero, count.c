#include<stdio.h>
#define size 5
int main()
{
    int bill[size]={0},max=0,i,zcnt=0,sum=0,E_cnt=0,O_cnt=0;
    for(i=0;i<size;i++)
    {
        printf("\n Enter bill %d = ",i+1);
        scanf("%d",&bill[i]);

        sum=sum+bill[i];
    }
     printf("\n****************************************************");
    for(i=0;i<size;i++)
    {
        printf("\n Amount of %d Bill =%d",i+101,bill[i]);
        if(bill[i]==0)
        {
            zcnt++;
        }
        else if(bill[i]%2==0)
        {
            E_cnt++;
        }
        else
        {
            O_cnt++;
        }
    }
    printf("\n\n***************************************************");
    printf("\n Total Bill Amount =%d ",sum);
    printf("\n Zero Amount count =%d ",zcnt);
    printf("\n Even Amount count =%d ",E_cnt);
    printf("\n Odd Amount count =%d ",O_cnt);

    return(0);
}


