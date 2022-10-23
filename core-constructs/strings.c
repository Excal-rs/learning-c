#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strlwr(char string[]){  // have to manually define function as they are not in standard c lib
    for(int i = 0; string[i]; i++){
        string[i] = tolower(string[i]);
    }
    return string;
}

char strupr(char string[]){  // have to manually define function as they are not in standard c lib
    for(int i = 0; string[i]; i++){
        string[i] = toupper(string[i]);
    }
    return string;
}

char *strrev(char *str)  // have to manually define function as they are not in standard c lib
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int strcmpi(char string[], char string2[]){
    strlwr(string);
    strlwr(string2);
    int result = strcmp(string, string2);

    return result;
}

int strnicmp(char string[], char string2[], int n){
    strlwr(string);
    strlwr(string2);
    int result = strncmp(string, string2, n);

    return result;
}

int main(){
    char string1[] = "Excal";
    char string2[] = "Rs";

    // strupr(string1);                            // converts a string to uppercase
    // strlwr(string2);                            // converts a string to lowercase
    // strcat(string1, string2);                   // appends string2 to end of string1
    // strncat(string1, string2, 1);               // appends n characters from string2 to string1
    // strcpy(string1, string2);                   // copy string2 to string1
    // strncpy(string1, string2, 2);               // copy n characters of string2 to string1

   

    // memset(string1,'*', strlen(string1));         //sets all characters of a string to a given character
    // memset(string1, '*', 1);                      //sets first n characters of a string to a given character (note n starts with 0)
    // strrev(string1);                              //reverses a string



    // int result = strlen(string1);                  // returns string length as int
    // int result = strcmp(string1, string2);         // string compare all characters
    // int result = strncmp(string1, string2, 1);     // string compare n characters
    // int result = strcmpi(string1, string2);        // string compare all (ignore case)
    // int result = strnicmp(string1, string1, 1);    // string compare n characters (ignore case)
    


    printf("%d \n", result);
    
    /* // uncomment for strcmp
    if(result == 0){
        printf("These strings are the same");
    }

    else{
        printf("These strings are not the same");
    }
    */
    

             
   
   return 0;
}
