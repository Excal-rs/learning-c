#include <stdio.h>
#include <stdbool.h>

void bubblesort(int array[], int size, bool reverse){
    if (reverse == 0){
        for (int i = 0; i < size - 1; i++ ){
            for (int j = 0; j < size - 1; j++ ){
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
    }
    else if (reverse == 1 ){
        for (int i = 0; i < size - 1; i++ ){
            for (int j = 0; j < size - 1; j++ ){
                if(array[j] < array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }        
    }
}
int main(){
    int array[] = {1,5,6,2,7,1,10,-1,14};
    int size = sizeof(array)/sizeof(array[0]);

    bubblesort(array, size, false);
    for (int i = 0; i < size; i++){
        printf("%d ,", array[i]);
    }

    printf("\n");
    
    bubblesort(array, size, true);
    for (int i = 0; i < size; i++){
        printf("%d ,", array[i]);
    }

    return 0;
}