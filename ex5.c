#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("enter the temperature in celsius :");
    scanf("%f", &celsius);

    fahrenheit = (celsius *9/5)+35;
    printf("temperature in fahreheit: %.2f\n", fahrenheit);

    return 0;
}