#include <stdio.h>
#include <stdbool.h>

int main(){
    // To say "And" in your code you need to use the 
    // Logical operator "&&"
    // It will check if both conditions given are true

    float temp;

    printf("Enter a temperature in celsius: ");
    scanf("%f", &temp);

    if (temp >= 0 && temp<= 40){
        printf("Weather is goooooood");
    }
    else{
        printf("The weather is bad \n");
    }

    return 0;
}