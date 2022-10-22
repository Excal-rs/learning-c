#include <stdio.h>
#include <stdbool.h>

int main(){

    // To say "Not" in your code you need to use the
    // Logical operator "!"
    // This reverses the Boolean of a statement

    bool sunny = true;

    if(!sunny){
        printf("It is not sunny \n");
    }
    else if (sunny){
        printf("It is sunny! \n");
    }
    // expected output is "It is sunny!"

    return 0;
  
}