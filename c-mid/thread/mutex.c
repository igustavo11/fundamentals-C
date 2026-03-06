#include <stdio.h>
#include <pthread.h>

int saldo = 0;
// cadeado global
pthread_mutex_t cadeado; 

void* depositar(void* arg) {
    for (int i = 0; i < 1000000; i++) {
        // porta antes de mexer no dinheiro
        pthread_mutex_lock(&cadeado);
        
        saldo++; 
        
        // destranca a porta para a outra thread poder trabalhar
        pthread_mutex_unlock(&cadeado);
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    // cadeado antes de começar
    pthread_mutex_init(&cadeado, NULL); 

    pthread_create(&t1, NULL, depositar, NULL);
    pthread_create(&t2, NULL, depositar, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    //cadeado no final para liberar memória
    pthread_mutex_destroy(&cadeado); 

    printf("Saldo Final esperado: 2000000\n");
    printf("Saldo Final REAL (Com Mutex): %d\n", saldo); 

    return 0;
}