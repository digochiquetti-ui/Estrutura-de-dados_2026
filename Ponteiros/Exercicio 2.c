#include <stdio.h>

int* encontrarMaior(int *vetor, int tamanho) {
    if (tamanho <= 0) return NULL; 

    int *maior = &vetor[0]; 

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            maior = &vetor[i];
        }
    }

    return maior;
}

int main() {
    int numeros[] = {12, 45, 7, 89, 34, 23};
    int tam = sizeof(numeros) / sizeof(numeros[0]);

    int *pMaior = encontrarMaior(numeros, tam);

    if (pMaior != NULL) {
        printf("O maior valor e: %d\n", *pMaior);
        printf("O maior valor esta no endereco: %p\n", (void*)pMaior);
    }

    return 0;
}