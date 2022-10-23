#include <stdio.h>
#include <string.h>

int main(){
    // strings are arrays of characters
    // this can be shown by using a for loop

    char string[] = "Excal-rs";

    for (int i = 0; i < strlen(string); i++){
        printf("%c \n", string[i]);
    }
    printf("\n");


    // arrays are collections of values of the same datatype
    
    double prices[] = {5.0, 2.0, 3.0, 1.99, 150}; // indexes start at 0
    int arraylen = sizeof(prices)/sizeof(prices[1]); 
    // because arrays only store one datatype, choosing the first datatype will get the size of each individual element, dividing the array size by this gives us the number of elements
    // arrays are unable to change size.
    for (int i = 0; i < arraylen; i++){
        printf("%.2lf \n", prices[i]);
    }

    return 0;
}