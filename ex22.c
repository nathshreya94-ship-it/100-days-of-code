#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitLossAmount;
    float percentage;


    printf("Enter the Cost Price , sellingPrice : ");
    scanf("%f%f", &costPrice,&sellingPrice );
    
    profitLossAmount = sellingPrice - costPrice;

    
    if (profitLossAmount > 0) {
        
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profitLossAmount < 0) {
        
        profitLossAmount = -profitLossAmount; 
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        
        printf("No Profit, No Loss.\n");
    }

    return 0;
}