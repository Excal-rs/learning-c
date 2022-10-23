 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>

 int main(){
    srand(time(0));

    int number = (rand() % 100) + 1;
    int guess;

    
    do{
        printf("\nGuess the number between 1 -100: ");
        scanf("%d", &guess);

        if (guess == number){
            printf("\nCorrect! Well done!");
            break;
        }
        else{
            printf("\nIncorrect! Try again.");
        }
    }while (1);

    
    return 0;
 }