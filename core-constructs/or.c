#include <stdio.h>

int main(){
    // To say "or" in your code you have to use the
    // logical operator "||"
    // This checks if atleast one of the given values are True

    float temp;

    printf("Please enter a temp in celsius: \n");
    scanf("%f", &temp);

    if (temp <= 0 || temp >= 40);{
        printf("Weather is bad! \n");

    }
    else{
        printf("Weather is good! \n");
    }




    return 0;
}