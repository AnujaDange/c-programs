#include<stdio.h>
int main()
 {
    int no;
    printf("\n Enter number=>");
    scanf("%d",&no);
    (no%5==0 && no%7==0)? printf("\n %d is divisible by 5 & 7 both.",no):(no%5==0)?printf("\n %d is divisible by 5.",no):(no%7==0)? printf("\n %d is divisible by 7.",no):printf("\n %d is not divisible by 5 & 7.",no);

    return(0);
 }
