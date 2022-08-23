#include<stdio.h>
#include<conio.h>
int main()
{
    char sp='\0',ep='\0',ch;
    printf("\n Enter starting point =>");
    sp=getche();
    printf("\n Enter ending point =>");
    ep=getche();
    if(sp>ep)
        {
            while(sp>=ep)
            {
               printf("\n %c",sp);
               sp--;
            }
        }
    else
        {
            while(sp<=ep)
            {
               printf("\n %c",sp);
               sp++;
            }

        }

    return(0);
}
