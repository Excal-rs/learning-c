#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'c';                       // single character             %c
    char b[] = "String";                // array of characters          %s


    int c = 69;                         // 4 bytes (-2^31 to 2^31-1)    %d or %i
    unsigned int d = 420;               // 4 bytes (0 to 2^32-1)        %u 


    float e = 3.141592;                 // 4 bytes 6-7 digits           %f
    double f = 141592653589793;         // 8 bytes 15-16 digits         %lf

    bool g = true;                      // 1 byte - (1 or 0)            %d

    char h = 100;                       // 1 byte (-128 to 127)         %d (or %c will print corresponding ascii)
    unsigned char i = 225;              // 1 byte (0 to +225)           %d (or %c will print corresponding ascii)

    short int j = 3829;                 // 2 bytes (-32768 to 32767)    %hd
    unsigned short int k = 53293;       // 2 bytes (0 to 65535)         %hu   

    long long int l = 10101010100000;               // 8 bytes (-9 to 9 quintillion)    %lld
    unsigned long long int m = 1010101010000000U;   // 8 Bytes (0 to 18 quintillion)    %llu

    return 0;
}