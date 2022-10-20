#include <stdio.h>

int main(){

    int age;

    printf("Please enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are an adult!\n");
    }
    else if(age <= 0){
        printf("Error! \n");
    }
    else{
        printf("You are not an adult!\n");
    }
    return 0;
}