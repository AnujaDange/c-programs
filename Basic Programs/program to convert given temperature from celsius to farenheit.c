#include<stdio.h>
int main()
{
    int cel;
    float frh;
    printf("\n Enter temperature in celsius =>");
    scanf("%d",&cel);
    frh=(1.8)*cel+32;
    printf("\n Temperature in Fahrenheit=>%f",frh);
    return(0);

}
