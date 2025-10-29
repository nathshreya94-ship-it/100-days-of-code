#include <stdio.h>

int main(){
    int n, i;
    double sum = 0.0;
    printf("enter the number of terms (n):");
    scanf("%d",&n);
    for(i = 1; i<=n; i++){
        sum += (2.0*i)/(4*i-1);
    }
    printf("approximate sum: %.2lf\n",sum);

    return 0;
}