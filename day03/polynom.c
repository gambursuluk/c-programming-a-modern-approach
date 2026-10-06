#include <stdio.h>
int main(){
    float x;
    printf("Enter x value:");
    scanf("%f",&x);
    float result = 3*x*x*x*x*x
                  +2*x*x*x*x
                  -5*x*x*x
                  -x*x
                  +7*x
                  -6;

    printf("%.2f\n",result);

    float result1 = ((((3*x + 2)*x -5)*x -1)*x + 7)*x -6;
    printf("%.2f\n",result1);

    return 0;
}