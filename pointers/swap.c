#include <stdio.h>

void swap(int *adress1, int *adres2){
    int temp = *adress1;
    *adress1 = *adres2;
    *adres2 = temp;
    
}
int main(){
    int n1 = 10;
    int n2 = 11;

    printf("before swap\n");
    printf("n1: %d | n2: %d\n\n", n1, n2);

    swap(&n1, &n2);
    printf("after swap");
    printf("n1: %d | n2: %d", n1, n2);

    return 0;
}