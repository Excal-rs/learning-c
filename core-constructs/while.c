#include <stdio.h>
#include <string.h>

int main(){
    char name[25];

    printf("What's your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0';

    while (strlen(name) <= 2){
        printf("\nName must be 3 characters long! \n");
        printf("What's your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) -1] = '\0';
    }
    
    printf("\nHello %s \n", name);


    return 0;
}