#include <stdio.h>
int main(){
    for(int i=0; i<10; i++){
        if(i == 6)
            break;
        printf("%d\n",i);
    }

    printf("*****************************\n");

    for(int i=0; i<10; i++){
        if(i == 6)
            continue;
        printf("%d\n",i);
    }

    return 0;
}