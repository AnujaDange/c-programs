#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    char major[30];
    int age;
    double gpay;
};
int main()
{
    struct student student1;
    student1.age=21;
    student1.gpay=1.3;
    strcpy(student1.name, "Mick");
    strcpy(student1.major, "Business");
    printf("%s",student1.name);
    return(0);

}
