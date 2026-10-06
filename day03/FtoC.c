#include<stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(){
    float fahri, cel; 
    printf("Enter Fahrenheit temperature:");
    scanf("%f", &fahri);
    cel = (fahri - FREEZING_PT)* SCALE_FACTOR;
    printf("Celcius equivalent: %.1f\n",cel);
}