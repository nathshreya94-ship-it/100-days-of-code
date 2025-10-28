#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount;
    int swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 9) {
        printf("Number after swapping first and last digits: %d\n", num);
        return 0;
    }
    lastDigit = num % 10;
    digitsCount = (int)log10(num);
    firstDigit = num / (int)pow(10, digitsCount);
    swappedNum = lastDigit * (int)pow(10, digitsCount);
    swappedNum += (num % (int)pow(10, digitsCount)) - lastDigit;
    swappedNum += firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}