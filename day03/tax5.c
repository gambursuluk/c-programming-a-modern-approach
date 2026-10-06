#include <stdio.h>
int main(){
    float tax = 5.0f;
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount+ amount*tax/100);
}