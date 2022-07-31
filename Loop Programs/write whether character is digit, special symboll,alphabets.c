#include<stdio.h>
int main()
{
    char ch='0';
    printf("\nEnter character=>");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("\n%c is LOWER CASE alphabet.",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("\n%c is UPPER CASE alphabet.",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n%c is DIGIT.",ch);
    }
    else
    {
        printf("\n%c is SPECIAL SYMBOL.",ch);
    }
    return(0);
}
