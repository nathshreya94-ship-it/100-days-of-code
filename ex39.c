#include <stdio.h>

int main() {
    int number, digit;
    long long productofodddigits = 1; 

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        digit = number % 10; 

        if (digit % 2 != 0) {
            productofodddigits *= digit;
        }

        number /= 10;
    }
    printf("%lld\n", productofodddigits);

    return 0;
}