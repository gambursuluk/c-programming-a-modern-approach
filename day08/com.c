#include <stdio.h>
int main(){
    int value;
    double com;
    printf("Enter a value of trade: ");
    scanf("%d", &value);
    if(value<2500){
        com = 30 + (value * 1.7/100);
    }
    if(value>=2500 && value<6250){
        com = 56 + (value * 0.66/100);
    }
    if(value>=6250 && value<20000){
        com = 76 + (value * 0.34/100);
    }
    if(value>=20000 && value<50000){
        com = 100 + (value * 0.22/100);
    }
    if(value>=50000 && value<500000){
        com = 155 + (value * 0.11/100);
    }
    if(value>=500000){
        com = 255 + (value * 0.9/100);
    }
    printf("Commission: $%.2f\n", com);
    
    return 0;
}