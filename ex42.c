#include <stdio.h>

int main() {
    int number, i, sum = 0;

    printf("Enter a number to check if it is a Perfect Number: ");
    scanf("%d", &number);

        if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

        for (i = 1; i < number; i++) {
        if (number % i == 0) { 
            sum += i;         
                }
    }

    
    if (sum == number) {
        printf("Perfect Number\n", number);
    } else {
        printf("Not Perfect Number\n", number);
    }

    return 0;
}