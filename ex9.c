#include <stdio.h>
#include <math.h>

int main(){
    float principal, rate, time ;
    float simple_interest, compound_interest;

    printf("enter the principle amount:");
    scanf("%f", &principal);

    printf("enter the annual interest rate (as a percentage, e.g., 5 for 5%%):");
    scanf("%f", &rate);

    printf("enter the time in years:");
    scanf("%f",&time);

    simple_interest = (principal * rate * time) / 100;

    
    rate = rate / 100; 
    compound_interest = principal * pow((1 + rate), time) - principal;

    
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;



}