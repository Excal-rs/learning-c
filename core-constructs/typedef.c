#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[25];
    char password[30];
} USER;


int main (){
    //  A typedef gives a nickname to a existing datatype

    USER user1 = {12344, "hello", "secretpassword"};
    printf("%d \n%s \n%s \n", user1.id, user1.name, user1.password);


    return 0;
}