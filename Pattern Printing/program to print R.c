#include<stdio.h>
#include<conio.h>
int main()
{
    int x,r,c;
    printf("\n Enter size for row become 6 to print exact R =>");
    scanf("%d",&x);
    for(r=1; r<=x; r++)
    {
        for(c=1; c<=x; c++)
        {
            if(r==1 || c==1 || r==1 || c==5 && r==3 || c==5 && r==2 ||r==3 || r==4 && c==2 ||r==5 && c==3 || r==6 && c==4)
            {
                printf(" * ");
            }
            else if(r==1 && c==6 || r==3 && c==6 || c==7 && r==1)
            {
             printf("  ");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    return(0);
}
