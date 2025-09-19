#include <stdio.h>
 int main() {
    float radius;
    float PI = 3.14;
    float area , circumference;
    printf("enter the radius pf the circle:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("the area of the circle is : %.2f\n", area);
    printf("the circumference of the circle is : %.2f\n", circumference );

    return 0;

 }