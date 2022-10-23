#include <stdio.h>

enum Day{Mon =1, Tue =2, Wed =3, Thu =4, Fri =5, Sat =6, Sun =7};

int main(){

    enum Day today = Sun;
    // enums are NOT strings

    if (today == Sun || today ==Sat ){
        printf("It is the weekend! ");
    }
    else{
        printf("GET BACK TO WORK!");
    }
    return 0;
}