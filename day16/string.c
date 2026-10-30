#include <stdio.h>
#include <string.h>
#define SEN_LEN 50

char digit(int digit){
    return "0123456789ABCDEF"[digit];
}
int main(int argc, char* argv[]){
    char* p = "Naber Cano";
    printf("%s\n Enter value:", p);
    int d = 12;
    printf("%c\n", digit(d));

    char text[] = "Bu bir mesajdir!";
    printf("%s\n", text);
    printf("%.6s\n",text);
    printf("%50s\n", text);
    printf("%10s\n", text);
    
    strcpy(text , "Yeniden!?");
    
    puts("");
    puts(text);
    
    


    
    return 0;
}