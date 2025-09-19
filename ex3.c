#include <stdio.h>

int main() {
    int length,width,Area,perimeter;
    printf("Enter length ");
    scanf("%d", &length); 
    printf("Enter width ");
    scanf("%d", &width);
    Area=length*width;
    perimeter=2*(length+width);
    printf("Area:%d\n,perimeter:%d",Area,perimeter);

    return 0; 
}