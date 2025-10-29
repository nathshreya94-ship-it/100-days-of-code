#include <stdio.h>

int main(){
    int n;
    float sum = 0.0;
    printf("enter the number of terms (n):");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        int numerator = 2*i+1;
        int denominator = 2*i+2;
        sum += (float)numerator / denominator;
    }
    printf("approximate sum: %.1f\n",sum);

    return 0;
}