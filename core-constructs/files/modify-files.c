#include <stdio.h>
#include <string.h>

void rmfile(char filelocation[]){
    if (remove(filelocation) == 0){
        printf("\nFile at \"%s\" deleted successfully\n", filelocation);
    }
    else{
        printf("\nError: File not deleted\n");
    }
}

char createfile(char filename[], char location[]){
    strcat(location, filename);
    FILE *file = fopen(("%s", location), "w");
    printf("File created at \"%s\" \n", location);
    fclose(file);
}

int main(){
    char location[] = "/home/excal/Desktop/";
    char filename[sizeof(location)] = "file.txt";

    createfile(filename, location);
    rmfile("/home/excal/Desktop/file.txt");
    return 0;
}