#include <stdio.h>

#define TAM 5

void somarVetores(const int *v1, const int *v2, int *res, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(res + i) = *(v1 + i) + *(v2 + i);
    }
}

int main() {
    int vetor1[TAM];
    int vetor2[TAM];
    int resultado[TAM];

    printf("Digite os %d elementos do primeiro vetor:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", (vetor1 + i));
    }

    printf("Digite os %d elementos do segundo vetor:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", (vetor2 + i));
    }

    somarVetores(vetor1, vetor2, resultado, TAM);

    printf("\nVetor Resultado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(resultado + i));
    }
    printf("\n");

    return 0;
}