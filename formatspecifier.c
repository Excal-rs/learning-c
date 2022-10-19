#include <stdio.h>

int main()
{
    /*
    %c = Character
    %s = string
    %f = float
    %lf = double
    %d = integer
    
    %.1 = decimal precision
    %1 = minimum field width
    %- align left
    
    */

    char character = 'c';
    char string[] = "string"; 
    float floats = 0.1234567;
    double dfloat =  0.1234567890;
    int integer = 12;


    printf("Before Formatting: \n\n");

    printf("%c \n", character );
    printf("%s \n", string);
    printf("%f \n", floats);
    printf("%lf \n", dfloat);
    printf("%d \n\n", integer);


    printf("\nAfter formatting: \n\n");

    printf("%10c \n", character );
    printf("%-10s \n", string);
    printf("%f \n", floats);
    printf("%.10lf \n", dfloat);
    printf("%d \n\n", integer);

    return 0;
}