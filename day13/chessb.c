#include <stdio.h>
#define SIZE 8
int main(){
    /*
    char board[SIZE][SIZE] ={
        {'R','N','B','K','Q','N','R'},
        {'P','P','P','P','P','P','P'},
        {' ','.',' ','.',' ','.',' ','.'},
        {'.',' ','.',' ','.',' ','.',' '},
        {' ','.',' ','.',' ','.',' ','.'},
        {'.',' ','.',' ','.',' ','.',' '},
        {'P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','N','R'}
    };
    */
    char board[SIZE][SIZE] = {
    "RNBKQBNR",
    "PPPPPPPP",
    " . . . .",
    ". . . . ",
    " . . . .",
    ". . . . ",
    "PPPPPPPP",
    "RNBQKBNR"
};

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}