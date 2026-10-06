#include <stdio.h>
int main(){
    char board[8][8]= {0};
    for(int i=0; i<8;i++){
        for(int j=0;j<8;j++){
            /*
            if((i+j)%2==0){
                board[i][j] = 'B';
            }
            else{
                board[i][j] = 'R';
        }
        */
            board[i][j] = ((i+j)%2==0)? 'B':'R';
        }
    }


     for(int i=0; i<8;i++){
        for(int j=0;j<8;j++){
           printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}