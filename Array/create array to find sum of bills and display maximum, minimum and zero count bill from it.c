#include<stdio.h>
#define size 5
int main()
{
    int bill[size]={},max=0,zcnt=0,sum=0,E_cnt=0,O_cnt=0;
    for(i=0;i<size;i++)
    {
        printf("\n Enter bill %d = ",i+1);
        scanf("%d",&bill[i]);
        if(i=0 || max<bill[i])
        {
            max=bill;
        }
        else if(bill[i]==0)
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
        sum=sum+bill[i];
    }
    for(i=0;i<size;i++)
    {
        printf("\n Amount of %d Bill =%d",i+101,bill[i]);
    }
    printf("\n Total Bill Amount =%d ",sum);
    printf("\n Maximum Bill Amount =%d ",max);
    printf("\n Minimum Bill Amount =%d ",min);
    printf("\n Zero Amount count =%d ",zcnt);
    printf("\n Even Amount count =%d ",E_cnt);
    printf("\n Odd Amount count =%d ",O_cnt);

    return(0);
}
