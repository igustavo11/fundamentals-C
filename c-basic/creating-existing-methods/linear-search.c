#include <stdio.h>

//interate to array for search unique letter

int searchChar(char text[], char target);

int main(){
    char word[] = "ProcurandoNemosherek3";
    char findWord = 'N';

    int position = searchChar(word, findWord);

    //verify
    if(position != -1){
        printf("found %c in index %d\n", findWord, position);
    }else {
        printf("not found %c in index %d", findWord, position);
    }
    
    return 0;
}

int searchChar(char text[], char target){
    int count = 0;

    while(text[count] !='\0'){
        if(text[count] == target){
          return count;
        }
          count ++;
    }

    return -1;
}

//this code in complexity in 0(n), because in linear search some check letter to letter 