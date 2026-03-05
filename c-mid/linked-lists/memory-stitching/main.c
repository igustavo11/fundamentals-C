#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node *next; //stuct pointer appontment to same
};

int main(){
    //request memory in two nodes
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));

    //pick value data
    n1->value= 10;
    n2->value= 20;
    n3->value=30;

    //n1 appont to adress n2
    n1->next = n2;

    //n2 appointment nobody
    n2->next = n3;
    n3->next = NULL;

    printf("Value n1: %d\n", n1->value);
    printf("Value n2(acess to n1): %d\n", n1->next->value);
    printf("Value n3(acess to n1): %d\n", n1->next->next->value);


    free(n1);
    free(n2);
    free(n3);
    return 0;

}