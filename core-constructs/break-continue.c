#include <stdio.h>

int main(){
    // continue causes the loop to skip the rest f the code are go to the next iteration
    // break causes the loops to end
    int i = 0;

    while(1){
        i = i + 1;

        if (i == 9){
            continue;
        }
    
        else if (i > 10){
            break;
        }

        printf("%d \n", i);       
    }

    return 0;
}

/* Expected output:

1 
2 
3 
4 
5 
6 
7 
8 
10 

*/