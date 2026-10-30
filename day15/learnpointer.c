#include <stdio.h>
int main(){
    printf("###\n");
    int i = 123, *p = &i;
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%p\n", &p);
    return 0;
}