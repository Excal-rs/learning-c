#include <stdio.h>
#include <ctype.h>
#include <string.h>

double F2C(double F){
    double Celsius = (F - 32) * 5 / 9;
    return Celsius;
}
double C2F(double C){
    double Fahrenheit = (C * 9 / 5) + 32;
    return Fahrenheit;
}

int main(){
    char convert[3];
    double temp;

    printf("For Celsius to Fahrenheit enter : \"C2F\" \n");
    printf("For Fahrenheit to Celsius enter : \"F2C\" \n");
    printf("What are you converting from? \n");
    scanf("%s", &convert);

    printf("Enter temp:\n");
    scanf("%lf", &temp);


    if (strcmp((tolower(convert)), "c2f")) {
        double f = C2F(temp);
        printf("%lf \n", f);

    }

    else if (strcmp(tolower(convert),"f2c")) {
        double c = F2C(temp);
        printf("%lf \n", c);

    }

    else{
        printf("Error: Invalid input! \n Try again!");
    }
    return 0;
}