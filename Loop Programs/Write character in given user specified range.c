#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0',sp='\0',ep='\0';
    printf("\n************Enter a range to print character***********");
    printf("\n Starting Point=> ");
    sp=getche();
    printf("\n Ending Point=> ");
    ep=getche();
    for(ch=sp;ch<=ep;ch++)
    {
        printf("\n %c ",ch);
    }
    getch();
    return(0);

}
