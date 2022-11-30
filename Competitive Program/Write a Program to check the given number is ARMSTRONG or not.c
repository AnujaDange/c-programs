#include <stdio.h>
int main() {
    int num, O_Num, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    O_Num = num;

    while (O_Num != 0) {
       // remainder contains the last digit
        remainder = O_Num % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       O_Num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
