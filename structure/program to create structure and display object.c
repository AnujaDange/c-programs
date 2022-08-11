#include<stdio.h>
int main()
{
    struct stud
    {
        int id_no;
        char name[20];
        long long int mob_no;
        float income;
    };
    struct stud std1;
    std1.id_no=21;
    std1.mob_no=9970374562;
    std1.income=50000;
    strcpy(std1.name,"Jayesh Suryavanshi" );
    printf("\n Employ id number=>%d",std1.id_no);
    printf("\n Employ Name=>%s",std1.name);
    printf("\n Employ mob number=>%lld",std1.mob_no);
    printf("\n Employ income=>%f",std1.income);
    getch();
    return(0);
}

