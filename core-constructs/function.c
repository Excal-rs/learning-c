#include <stdio.h>


// A function is a piece of code that can be called
// Functions are usually used for code that has to be uses multiple times

void birthday(){ // the type of function depends on what you return
    printf("\nHappy birthday to You");
    printf("\nHappy birthday to You");
    printf("\nHappy birthday dear...YOU");
    printf("\nHappy birthday to You \n");
    // I am not returning anything as this is a "void" function
}

int main(){ // Main is also a function
    birthday();
    birthday();
    birthday();

    return 0; // It returns a int value which is why it is called "int main"
}