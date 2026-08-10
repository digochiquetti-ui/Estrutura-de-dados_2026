#include <stdio.h>
#include <string.h>

//iterativa
int main() {
    char str[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    tamanho = strlen(str);

    printf("String invertida: ");

    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

//recursiva
void palavraInversa(char str[], int indice) {
    if (str[indice] == '\0') {
        return;
    }

    palavraInversa(str, indice + 1);
    printf("%c", str[indice]);
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("String invertida: ");
    palavraInversa(str, 0);

    printf("\n");

    return 0;
}