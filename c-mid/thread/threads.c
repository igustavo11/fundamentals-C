#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> 
#include <unistd.h>  
void* correr(void* argumento) {
    char* nomeDoCorredor = (char*) argumento;

    for (int i = 1; i <= 5; i++) {
        printf("%s passou no km %d\n", nomeDoCorredor, i);
        sleep(1); 
    }

    return NULL;
}

int main() {
    pthread_t thread1;
    pthread_t thread2;

    printf("--- A CORRIDA VAI COMEÇAR ---\n");

    pthread_create(&thread1, NULL, correr, "Corredor A");
    pthread_create(&thread2, NULL, correr, "Corredor B");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("--- FIM DA CORRIDA ---\n");

    return 0;
}