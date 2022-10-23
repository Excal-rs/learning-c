 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>

 int main(){
    srand(time(0));

    const int MIN = 1;
    const int MAX = 100;
    int number = (rand() % MAX) + MIN;
    int guess;
    int guesses = 0;
    
    do{
        printf("\nGuess the number between 1 -100: ");
        scanf("%d", &guess);

        if (guess == number){
            printf("\nCorrect! Well done! It only took you %d tries! \n", guesses);
            break;
        }
        else if(guess > number){
            printf("\nToo high!");
        }
        else if(guess < number){
            printf("\nToo low!");           
        }
        guesses++;
    }while (1);

    
    return 0;
 }