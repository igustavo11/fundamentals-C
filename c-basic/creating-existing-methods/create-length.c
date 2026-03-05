#include <stdio.h>

int calculateLength(char text[]);

int main(){
    char name[] = "Testinglengthwordsincafafa";
    int length = calculateLength(name);
    printf(":%d\n", length);

    return 0;
}

int calculateLength(char text[]){
    int count = 0;
    while(text[count] !='\0'){
        count ++;
    }

    return count;
}