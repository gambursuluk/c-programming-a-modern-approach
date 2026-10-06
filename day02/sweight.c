#include<stdio.h>
int main() {
    int height, length, width, volume, weight;
    printf("Height of the box: ");
    scanf("%d", &height);
    printf("Length of the box: ");
    scanf("%d", &length);
    printf("Width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165)/166;
    printf("Volume (cubic inches): %d \n", volume);
    printf("Dimensional weight (pounds): %d \n", weight);

    return 0;
}