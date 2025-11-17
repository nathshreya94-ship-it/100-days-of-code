//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);  

    int arr[rows][cols];
    int rowSum[rows];           
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;              
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j]; 
        }
    }


    for(i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
