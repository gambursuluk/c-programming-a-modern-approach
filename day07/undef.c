#include<stdio.h>
int main(){
    int a,b,c;
    a =5;
    c = (b=a+2) - (a=1);
    printf("%d\n%d\n%d\n", a,b,c);
    int i =2;
    int j = i *i++;
    printf("%d/n", j);
    return 0;
}