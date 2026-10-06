#include<stdio.h>
int main(){
    int prefix, id, pc, in, digit;
    printf("Enter ISBN:");
    scanf("%3d%1d%3d%5d%1d",&prefix,&id,&pc,&in,&digit);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", pc);
    printf("Item number: %d\n", in);
    printf("Check digit: %d\n", digit);
    return 0;
}