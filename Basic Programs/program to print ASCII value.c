#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt;
    printf("\n=========ASCII TABLE==========");
    for(cnt=1;cnt<=128;cnt++)
    {
        printf("\n     %d=%c",cnt,cnt);
    }
    return(0);
}
