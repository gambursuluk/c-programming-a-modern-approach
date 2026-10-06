#include <stdio.h>
int main(){
    int number;
    printf("Enter phone number [ (xxx) xxx-xxxx]:");
    scanf("%d", &number);
    int first = number/10000000;
    int second = (number/10000)%10000;
    int third = number%1000;
    printf("You entered %d.%d.%d\n", first,second,third);
    return 0;
}