#include <stdio.h>

float average(float a, float b){
    return (a+b)/2;
}

int main(){
    float arr[3];
    printf("Enter three numbers: ");
    scanf("%f %f %f", &arr[0], &arr[1], &arr[2]);
    printf("Average of %.2f and %.2f: %.2f\n", arr[0], arr[1], average(arr[0],arr[1]));
    printf("Average of %.2f and %.2f: %.2f\n", arr[0], arr[2], average(arr[0],arr[2]));
    printf("Average of %.2f and %.2f: %.2f\n", arr[1], arr[2], average(arr[1],arr[2]));

    
    return 0;
}