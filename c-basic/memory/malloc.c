#include <stdio.h>
#include <stdlib.h>

int main(){
    int array = 5;
    int *dinamicArray = malloc(array * sizeof(int));

    if(array == NULL){
        printf("Err, memory\n");
        return 1;
    }

    dinamicArray[0] = 10;
    dinamicArray[1] = 20;

    printf("value index 0: %d\n", dinamicArray[0]);
    printf("value index 1: %d\n", dinamicArray[1]);

    return 0;
}