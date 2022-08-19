#include<stdio.h>
#include<conio.h>
int main()
{
  int n, i, count = 0;                  //1,2,3,4,5,6,7,8......
  printf("Enter a positive integer: ");
  scanf("%d",&n);                       // n = 5 ;

  for (i=2; i <=n ; i++)
    {
                           /* 5%2!=0; 5%3!=0; 5%4!=0; 5%5==0;  */
    if (n%i==0)
        count++;    // count=1;
   }
  if (count == 1)       //count==1;
  {
      printf("%d is a prime number.", n);     // prime
  }
  else
  {
      printf("%d is not prime number.", n);

 return(0);
}
