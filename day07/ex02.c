#include <stdio.h>
int main(){
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    int tens, ones, hundreds;
    ones = num%10;
    hundreds = num/100;
    tens = (num/10)%10;
    printf("The reversal is: %d%d%d\n",ones, tens, hundreds);
    return 0;
}