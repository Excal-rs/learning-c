#include <stdio.h>

int main()
{
    // We need to declare what type of variable id created,
    // There are two steps when creating a variable, declaration and initialisation

    int x; // this is the variable 'x' being declared as a integer
    x = 100; // this is initialisation

    float a = 10.01; // it can be declared and initialized on the same line

    /* 
    Types of variables;
    int, integer e.g 10
    float, a decimal number e.g 0.62
    char, a single character, e.g 'e'
    
    *** there is no string datatype, to declare a string do this*** */

    char string[] = "This is a string"; //strings are technically arrays


    printf("%s \n" ,string); // how to print a string variable, %c is used for single characters
    printf("%i \n", x); // how to print a int variable
    printf("%f \n", a); // how to print a float variable


    
    return 0;
}