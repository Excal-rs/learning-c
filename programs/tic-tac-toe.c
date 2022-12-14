#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char BOT = 'O';



void resetBoard();
void printBoard();

int checkFreeSpaces();

void playerMove();
void botMove();

char checkWinner();
void printwinner(char);


int main(){
    char winner = ' ';
    resetBoard();

    while(winner == ' ' && checkFreeSpaces() != 0){
        printBoard();

        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0){
            break;
        }

        botMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0){
            break;
        }

    }

    printBoard();
    printwinner(winner);

    return 0;
}



void resetBoard(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}
void printBoard(){
    printf("\n%c | %c | %c", board[0][0], board[0][1], board[0][2]);
    printf("\n--|---|--");
    printf("\n%c | %c | %c", board[1][0], board[1][1], board[1][2]);
    printf("\n--|---|--");
    printf("\n%c | %c | %c \n", board[2][0], board[2][1], board[2][2]);

}

int checkFreeSpaces(){
    int freespaces = 9;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if ((board)[i][j] != ' '){
               freespaces--;
            }
        }

   }
   return freespaces;
}

void playerMove(){
    int x;
    int y;

    do{
        printf("Enter row number #1-3: ");
        scanf("%d", &x);
        x--;

        printf("Enter column number #1-3: ");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' '){
            printf("Spot is already taken! \n");
            continue;
        }
        else{
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}
void botMove(){
    srand(time(0));
    int x;
    int y;

    if (checkFreeSpaces() > 0){
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = BOT;
    }
    else{
        printwinner(' ');   
    }
}

char checkWinner(){
    // rows
    for (int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board [i][0] == board[i][2]){
            return board[i][0];
        }
    }

    // columns
    for (int i = 0; i < 3; i++){
        if (board[0][i] == board[1][i] && board [0][i] == board[2][i]){
            return board[0][i];
        }
    }

    //diagonals
    if (board[0][0] == board[1][1] && board [0][0] == board[2][2]){
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board [0][2] == board[2][0]){
        return board[0][2];
    }
    
    return ' ';
}

void printwinner(char winner){
    if (winner == PLAYER){
        printf("\nYOU WIN! \n");
    }
    else if (winner == BOT){
        printf("\nYOU LOST! \n");
    }
    else{
        printf("\nIt is a tie!\n");
    }
}
