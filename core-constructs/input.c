#include <stdio.h>

#include <string.h>



int main(){

    char name[25]; //the value inside square brackets is the length 
    int age; // You have to declare variable first

    printf("\nWhat's your name?"); //using fgets as scanf only follows to first whitespace
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; // removes new line input from string

    printf("How old are you?");
    scanf("%d", &age); // & is not needed for string

    printf("\nHello %s, how are you?\n", name);
    printf("You are %d years old \n", age);

    return 0;

}