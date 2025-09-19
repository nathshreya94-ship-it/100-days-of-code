#include <stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("enter a positive integer (n):");
    scanf("%d" , &n);

    if (n <=0){
        printf("please enter a positive integer.\n");
        return 1;

    }

    for (int i = 1; i <= n; i++){
        sum += i;
    }

    printf(" the sum of the first %d natural numbers is : %d\n", n, sum);

    return 0;
}