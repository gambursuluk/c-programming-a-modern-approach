#include <stdio.h>
int main(){
    int N[10];
    printf("Enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d", &N[i]);
    }
    printf("In reverse order: ");
    for(int i=9; i>=0; i--){
        printf("%d ", N[i]);
    }
    printf("\n");
    return 0;
}