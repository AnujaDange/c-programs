#include<stdio.h>
#include<stdio.h>
int main()
{
    char ch='0';
    printf("\n Enter character =>");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is UPPER CASE character",ch);
    }
    else
    {
        printf("\n %c is LOWER CASE character",ch);
    }
    return(0);
}
