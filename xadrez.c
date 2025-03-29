#include <stdio.h>
#include <unistd.h>

int main () {
    char rainha = 8; // Initialize with a value
    char torre = 5;  // Initialize with a value
    char bispo = 5;  // Initialize with a value

        printf("Movimento da torre:\n");
    for (int i = 0; i < torre; i++) { 
        printf("Direita\n");
    }
        printf("\nMovimento do bispo:\n");
    for (int i = 0; i < bispo; i++) { 
        printf("Cima, Direita\n");
    }
        printf("\nMovimento da rainha:\n");
    for (int i = 0; i < rainha; i++) {
        printf("Esquerda\n");
    }

    return 0;
}