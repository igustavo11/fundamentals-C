#include <stdlib.h>
#include <stdio.h>

int main(){
    int amount;

    printf("How many notes do you want to keep?\n");
    scanf("%d", &amount);
    int *notes = malloc(amount * sizeof(int));
    // if ram is full, it return null and close the program
    if(notes == NULL){
        printf("Memory full\n");
        return 1;
    }
    //flilling
    printf("\nWrite notes: %d\n", amount);
    for(int i = 0; i < amount; i++){
        printf("Write note %d:", i + 1);
        //'notes' is already a pointer. When we use notes[i],
        //C understands that we want the address of that specific house.
        scanf("%d", &notes[i]);
    }

    //ready save in memory
    printf("\n--resume notes--\n");
    for(int i = 0; i < amount; i++){
        printf("Note %d: %d\n", i + 1, notes[i]);
    }

    free(notes);
    printf("\nMemory Heap free suscess\n");

    return 0;
}