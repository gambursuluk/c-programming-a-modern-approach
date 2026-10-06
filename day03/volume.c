#include <stdio.h>
#define PI 3.1415
#define CONSTANT 4.0f/3.0f

int main(){
    int r;
    printf("Enter the radius value:");
    scanf("%d", &r);
    float volume = r * r* r * PI * CONSTANT;
    printf("%f\n", volume);
    return 0;
}