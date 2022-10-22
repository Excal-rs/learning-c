#include <stdio.h>

void bday(char[], int); //function prototype


int main(){
    int age;
    char name[20];
    printf("Enter Your first name: ");
    scanf("%s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    bday(name, age);

    return 0;
}

void bday(char name[], int age){
    printf("\nHappy birthday to You");
    printf("\nHappy birthday to You");
    printf("\nHappy birthday dear %s", name);
    printf("\nHappy birthday to You ");
    printf("\nYou are %d years old \n", age);
}