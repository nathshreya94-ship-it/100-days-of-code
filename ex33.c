#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       originalNum /= 10;
    }

    if (result == num)
        printf(" Armstrong number ", num);
    else
        printf(" not an Armstrong number ", num);

    return 0;
}