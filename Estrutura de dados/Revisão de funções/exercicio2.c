#include <stdio.h>

float calcularSalarioFinal(float salario, float percentual) {
    return salario + ((salario * percentual) / 100);
}


int main()
{
    float salarioUsu = 0;
    float percentualUsu = 0;
    
    printf("Digite o salário: ");
    scanf("%f", &salarioUsu);
    
    printf("Digite o percentual: ");
    scanf("%f", &percentualUsu);
    
    printf("O Salário final é: %2.f", calcularSalarioFinal(salarioUsu, percentualUsu));
    
    

    return 0;
}