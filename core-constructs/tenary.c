#include <stdio.h>

int findmaxif(int x, int y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
}

int findmaxtern(int x, int y){
    return (x>y) ? x : 
}




int main(){
    // A ternary operator is shorthand for a if/else statement
    // when assigning/returning a value
    // (condition) ? value if true: value if false

    int max =  findmaxif(3,4);
    printf("%d", max);

    int max2 = findmaxtern(3,4)
    printf("%d", max2);

    // both of them do the same thing but the ternary is quicker to write and read
    return 0;
}