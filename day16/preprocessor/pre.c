#include<stdio.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(){
    char c  = 'f';
    printf("%c\n", TOUPPER(c));
    

    return 0;
}
