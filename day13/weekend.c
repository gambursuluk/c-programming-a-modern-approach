#include <stdio.h>
#include <stdbool.h>
int main(){
    bool weekend[7] = {true, [6] = true};
    int a= 0;
    int size = (sizeof(weekend)/sizeof(weekend[0]));
    while( a < size){
        printf("%d\n", weekend[a]);
        a++;
    }
return 0;
}