#include<stdio.h>
int main()
{
    int no=0,i=0;
    printf("\n Enter range upto which you want to find cube=> ");
    scanf("%d",&no);
    printf("\n********************Cubes are**********************");

    for(i=1 ;i<=no ;i++)
    {
        printf("\n   %d=%d ",i,i*i*i);
    }
    printf("\n***************************************************");
    return(0);
}
