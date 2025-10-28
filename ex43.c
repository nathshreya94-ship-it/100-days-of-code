#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int originalNum = num;
    long long sumOfFactorials = 0;

    if (num == 0) {
        return 0; 
    }

    while (num > 0) {
        int digit = num % 10;
        sumOfFactorials += factorial(digit);
        num /= 10;
    }

    if (sumOfFactorials == originalNum) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int number;
    scanf("%d", &number);

    if (isStrongNumber(number)) {
        printf("strong number \n", number);
    } else {
        printf("Not strong number \n", number);
    }

    return 0; 
}