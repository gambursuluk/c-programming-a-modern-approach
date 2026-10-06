#include <stdio.h>
int main(){
    float a;
    int b,c;
    printf("1: ");
    scanf("%d", &b);
    printf("2: ");
    scanf("%d", &c);
    a = (float) b/c;
    printf("Result: %f\n",a);
    
    return 0;
}