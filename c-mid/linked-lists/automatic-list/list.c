#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

void imprimirLista(struct Node *head);
void libearLista(struct Node *head);
struct Node* inserirNoInicio(struct Node *head, int novoValor);

int main() {
    struct Node *head = NULL;

    head = inserirNoInicio(head, 10);
    head = inserirNoInicio(head, 20);
    head = inserirNoInicio(head, 30);

    imprimirLista(head);
    libearLista(head);
    return 0;
}

void imprimirLista(struct Node *head) {
    struct Node *atual = head;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->value);
        atual = atual->next; 
    }
    printf("NULL\n");
}

struct Node* inserirNoInicio(struct Node *head, int novoValor) {
    struct Node *novoNo = malloc(sizeof(struct Node));
    novoNo->value = novoValor;
    novoNo->next = head;
    return novoNo;
}


void libearLista(struct Node *head){
  struct Node *atual= head;
  struct Node *proximoNo;

    while(atual != NULL){
    proximoNo = atual->next;

    free(atual);

    atual = proximoNo;

  }
  printf("memoria da lista liberada\n");
}
