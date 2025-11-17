#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter no. of elements");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    
    printf("sum is %d", sum);
    return 0;
}
