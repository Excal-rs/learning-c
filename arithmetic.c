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
    int num2 = 3;

    printf("num = %d \n", num );
    printf("num2 = %d \n\n",num2 );

    printf("Increments: \n");
    printf("num++ = %d \n", ++num);     // this is shorthand for num = num+1
    printf("num2++ = %d \n\n", ++num2); // this is shorthand for num = num+1

    num = 2; //reassign values as they are modified above
    num2 = 3; //reassign values as they are modified above

    printf("Division: \n");
    printf("num/2 = %d \n", num/2 );
    printf("*Truncated* num2/2 = %f \n", num2/2 ); // this will give the DIV value (truncated)
    printf("num2/2 = %f \n\n", num2 / 2.0 );

    
    printf("Multiplication: \n");
    printf("num*2 = %d \n", num*2 );
    printf("num2*2 = %d \n\n",num2*2 );
    

    return 0;
}