 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>

 int main(){
    srand(time(0));

    const int MIN = 1;
    const int MAX = 100;
    int number = (rand() % MAX) + MIN;
    int guess;

    
    do{
        printf("\nGuess the number between 1 -100: ");
        scanf("%d", &guess);

        if (guess == number){
            printf("\nCorrect! Well done!");
            break;
        }
        else if(guess > number){
            printf("\nToo high!");
            continue;
        }
        else if(guess < number){
            printf("\nToo low!");
            continue;            
        }
        else{
            printf("\nIncorrect! Try again.");
        }
    }while (1);


    return 0;
 }