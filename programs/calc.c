#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("+ = add \n");
    printf("- = subtract \n");
    printf("* = multiply \n");
    printf("/ = divide \n");
    printf("What type of operator fo you want to use? \n");
    scanf("%c", &operator);

    printf("Enter the first number: \n");
    scanf("%lf", &num1);

    printf("Enter the second number: \n");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result is %lf \n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result is %lf \n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result is %lf \n", result);
        break;

    case '/':
        result = num1 / num2;
        printf("Result is %lf \n", result);
        break;
    
    default:
        printf("Error: invalid operator \"%c\" \n", operator);
        break;
    }
   
    return 0;
}
