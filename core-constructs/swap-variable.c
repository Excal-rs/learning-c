#include <stdio.h>
#include <string.h>

int main(){
    char x[15] = "Hello" ;
    char y[15] = "World";
    // char x = "h" ;
    // char y = "w";

    printf("Before: \n");
    printf("variable x is = %s \n", x);
    printf("variable y is = %s \n", y);

    // With third variable: (more readable does not work with strings)
    // char temp;
    // temp = x;
    // x = y;
    // y = temp;

    //Without third variable: (doesn't work for strings):
    // x = x + y;
    // y = x - y;
    // x = x - y;

    // For strings: (must be same size)
    char temp[20];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("\nAfter: \n");
    printf("variable x is = %s \n", x);
    printf("variable y is = %s \n", y);
    return 0;
}