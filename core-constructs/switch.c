#include <stdio.h>

int main(){
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade){
    case 'a':
        printf("Perfect");
        break;
    case 'b':
        printf("Nearly Perfect!");
        break;

    case 'c':
        printf("Nearly there!");
        break;

    case 'd':
        printf("Better luck next time!");
        break;

    case 'f':
        printf("bro...");
        break;
    
    default:
        printf("Please enter only letter grades!");
        break;
    }

    return 0;
}