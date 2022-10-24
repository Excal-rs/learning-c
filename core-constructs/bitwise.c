#include <stdio.h>

int main(){
    // operators used in bit level programming

    // & = and
    // | = or
    // ^ = XOR
    // << = left shift
    // >> = right shift
    // ~ = inverts binary 

    int x = 6;
    int y = 12;
    int z = 0;
    
    
    z = x & y;
    printf("%d \n", z);
    z = x | y;
    printf("%d \n", z);
    z = x ^ y;
    z = x >> 1 ; // Divides it by 2^n
    printf("%d \n", z);
    z = x << 1 ; // times it by 2^n 
    printf("%d \n", z);
    z = ~x;
    printf("%d \n", z);


    return 0;
}