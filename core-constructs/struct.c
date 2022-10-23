#include <stdio.h>
#include <string.h>


struct Player
{
    char username[16];
    int score; 
};

int main(){
    // A struct is a collection of related variables
    // Similar to classes in other languages but do not have methods

    struct Player player1;
    struct Player player2;

    strcpy(player1.username, "Player1");
    player1.score = 0;

    strcpy(player2.username, "Player2");
    player2.score = 213;

    printf("%s %d \n", player1.username, player1.score);
    printf("%s %d \n", player2.username, player2.score);

    return 0;
}