#include <stdio.h>

int main(){
    FILE *file = fopen("secret.txt", "r");
    char buffer[255];

    if (file == NULL){
            printf("Unable to open file!");
    }
    else{
        while(fgets(buffer, 255, file) != NULL){
            printf("%s", buffer);
        }
    }

    fclose(file);
    return 0;
}