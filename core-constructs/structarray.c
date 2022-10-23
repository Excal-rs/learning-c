#include <stdio.h>
#include <string.h>

typedef struct{

    char fname[15];
    int year;

} person;



int main(){
    person person1 = {"Excal", 15};
    person person2 = {"Saifali", 21};
    person person3 = {"Itachi", 31};
    person person4 = {"Edward", 13};

    person people[] = {person1, person2,
                       person3, person4}; 

    for (int i = 0; i < sizeof(people)/sizeof(people[0]); i++){
        printf("%-15s %-15d \n", people[i].fname, people[i].year);
    }


    return 0;
}