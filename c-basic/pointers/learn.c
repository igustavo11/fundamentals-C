//memory RAM is big array in bytes, byte is on a adress for memory
// //poniters is variable, guard adress memory
// & : Significa "O endereço de".
// * : Significa "O valor apontado por" (ou "O conteúdo do endereço").
#include <stdio.h>

int main(void){
    int age = 10;
    int *prtAge = &age;
    // %p for adress memory(pointers)
    printf("%p\n", age);
    printf("value in pointer %p\n", prtAge);
    printf("value in pointer %d\n", *prtAge);
    
    return 0;
}