#include <stdio.h>
#include <string.h>

int main() {
    char binaryNumber[100]; 
    char onesComplement[100]; 
    int i;
    int len;

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    len = strlen(binaryNumber);

    for (i = 0; i < len; i++) {
        if (binaryNumber[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNumber[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Error: Invalid binary input. Please enter only '0's and '1's.\n");
            return 1;
        }
    }
    onesComplement[len] = '\0'; 

    printf("Original binary number: %s\n", binaryNumber);
    printf("%s\n", onesComplement);

    return 0; 
}