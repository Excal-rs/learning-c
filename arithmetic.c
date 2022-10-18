#include <stdio.h>


int main()
{
    /*
    + = addition
    - = subtraction
    * = multiplication
    / = division
    ++ = increment
    -- = decrement 
    */
    
    int num = 2;
    int num2 = 4;

    printf("num = %d \n", num );
    printf("num2 = %d \n\n",num2 );

    printf("Increments: \n");
    printf("num++ = %d \n", num++);
    printf("num2++ = %d \n\n", num2++);

    printf("Division: \n");
    printf("num/2 = %d \n", num/2 );
    printf("num2/2 = %d \n\n",num2/2 );
    
    printf("Multiplication: \n");
    printf("num*2 = %d \n", num*2 );
    printf("num2*2 = %d \n\n",num2*2 );
    

    return 0;
}