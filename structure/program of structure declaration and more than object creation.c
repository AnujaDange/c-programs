#include<stdio.h>
int main()
{
    struct stud
    {
        int id_no;
        char name;
        long long int mob_no;
        float income;
    };

    struct stud std1,std2,std3;
    printf("\n**********1st Employee Details***********");
    printf("\nEnter Employ id number=> ");
    scanf("%d",&std1.id_no);
    fflush(stdin);
    printf("\nEnter Employ Name=> ");
    scanf("%c",&std1.name);
    printf("\nEnter Employ mob number=> ");
    fflush(stdin);
    scanf("%ld",&std1.mob_no);
    printf("\nEnter Employ income=> ");
    scanf("%f",&std1.income);
    getch();

    printf("\n**********2nd Employee Details***********");
    printf("\nEnter Employ id number=> ");
    scanf("%d",&std2.id_no);
    fflush(stdin);
    printf("\nEnter Employ Name=> ");
    scanf("%c",&std2.name);
    fflush(stdin);
    printf("\nEnter Employ mob number=> ");
    scanf("%ld",&std2.mob_no);
    printf("\nEnter Employ income=> ");
    scanf("%f",&std2.income);
    getch();

    printf("\n**********3rd Employee Details***********");
    printf("\nEnter Employ id number=> ");
    scanf("%d",&std3.id_no);
    fflush(stdin);
    printf("\nEnter Employ Name=> ");
    scanf("%c",&std3.name);
    fflush(stdin);
    printf("\nEnter Employ mob number=> ");
    scanf("%lld",&std3.mob_no);
    printf("\nEnter Employ income=> ");
    scanf("%f",&std3.income);

    printf("\n\n\n***************1st Employee Details************");
    printf("\n**********1st Employee Details***********");
    printf("\n Employ id number=>%d",std1.id_no);
    fflush(stdin);
    printf("\n Employ Name=>%s",std1.name);
    printf("\n Employ mob number=>%ld",std1.mob_no);
    printf("\n Employ income=>%f",std1.income);
    getch();

    printf("\n\n\n***************2nd Employee Details************");
    printf("\n Employ id number=>%d",std2.id_no);
    printf("\n Employ Name=>%s",std2.name);
    printf("\n Employ mob number=>%ld",std2.mob_no);
    printf("\n Employ income=>%f",std2.income);
    getch();


     printf("\n\n\n***************2nd Employee Details************");
    printf("\n Employ id number=>%d",std3.id_no);
    printf("\n Employ Name=>%s",std3.name);
    printf("\n Employ mob number=>%ld",std3.mob_no);
    printf("\n Employ income=>%f",std3.income);
    getch();
    return(0);
}


