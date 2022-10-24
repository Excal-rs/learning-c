#include <stdio.h>

int main(){
    // memory = an array og bytes within ram - street
    // memory address = the address of where a memory block is located - house addr
    // memory block - a single byte within memory, used to hold some values - person
    char a;
    char b[5]; 

    printf("bytes: %d \n",  sizeof(a));
    printf("bytes: %d \n",  sizeof(b));
    // printf("bytes: %d \n \n",  sizeof(c));

    printf("Addr = %p \n", &a);
    printf("Addr = %p \n", &b);
    // printf("Addr = %p \n", &c);
    return 0;
}