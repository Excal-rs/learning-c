#include <stdio.h>
#include <string.h>

int main(){
    char name[25];

    do{
        printf("\nName must be 3 characters long. \n \n");
        printf("What's your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) -1] = '\0';
        
    } while (strlen(name) <= 2);

    //do while loop can be mor efficient to write as they dont repeat code in and out of it
    printf("\nHello %s \n", name);

    return 0;
}