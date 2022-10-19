#include <stdio.h>
#include <string.h>

int main()
{
    // to output in c it is printf - like a printer 
    // to accept a input in c it is scanf - like a scanner 
    // fgets can also be used but you should not mix them together as scanf keeps the enter key buffered.
    int age[2]; // u have to declare the variable first and its length

    printf("How old are you! \n");
    fgets(age,2,stdin); //use & - scanf reads up to whitespace
    age[strlen(age)-1] = '\0';
    printf("You are %s years old \n", age);

    char name[25];
    printf("What is your name? \n");
    
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //removes \n character as fgets keeps it
    printf("Your name is %s", name);


    return 0;
}