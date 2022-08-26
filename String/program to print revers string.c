#include<stdio.h>
int main()
{
    char myname[20]=" ";
    printf("\n Enter name of student => ");
    gets(myname);
    printf("\n String before reverse = %s",myname);
    strrev(myname);
    printf("\n String after reverse = %s",myname);
    getch();
    return(0);
};

