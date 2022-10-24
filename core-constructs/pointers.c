#include <stdio.h>

int main(){
    // a refrenece to another variable, some tasks are easier with pointes
    // mostly used in functions
    // to create a pointer use *

    int age = 21;
    int *pointer = &age; 

    printf("address of age: %p \n", &age);
    printf("value of age: %d \n\n", age);

    printf("Size of: %d \n", sizeof(age));
    printf("Size of: %d \n\n", sizeof(pointer));

    printf("address of pointer: %p \n", &pointer);
    printf("value of stored addr: %d \n", *pointer);


    return 0;
}