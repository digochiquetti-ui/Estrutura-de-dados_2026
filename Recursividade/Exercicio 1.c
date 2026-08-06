//ITERATIVO
#include <stdio.h>

int main()
{
	int soma = 0, numero, digito;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &numero);

	while (numero > 0) {
		digito = numero % 10;
		soma += digito;
		numero = numero / 10;
	}

	printf("Soma dos digitos: %d\n", soma);


	return 0;
}

//recursivo
int somaDigitos(int numero) {
	if (numero == 0) {
		return 0;
	}

	return (numero % 10) + somaDigitos(numero / 10);
}

int main() {
	int numero;

	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &numero);

	printf("Soma dos digitos: %d\n", somaDigitos(numero));

	return 0;
}