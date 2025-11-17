#include <stdio.h>

int main() {
    int num, digit;
    int count[10] = {0};   

    scanf("%d", &num);   

    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    int maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
