#include <stdio.h>
int main(){
    int num;
    printf("Enter a two-digit number: ");
    scanf("%2d", &num);
    int tens, ones;
    tens = num/10;
    ones = num%10;
    printf("The reversal is: %d%d\n",ones, tens);
    return 0;
}