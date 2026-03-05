

#include <stdio.h>
#include <string.h>
#include "bank.h" 

int main() {
    struct AccountBank n1;
    n1.id = 1;
    n1.balance = 0;
    strcpy(n1.holder, "Gustavo");

    printf("Saldo inicial: %.2f\n", n1.balance);

    float valueDigit;
    printf("Valor do deposito: ");
    scanf("%f", &valueDigit);

    Deposit(&n1, valueDigit);

    printf("Novo saldo para %s e %.2f\n", n1.holder, n1.balance);

    return 0;
}