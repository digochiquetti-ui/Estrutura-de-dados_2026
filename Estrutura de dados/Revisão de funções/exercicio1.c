#include <stdio.h>

float calcularArea(float base, float altura) {
    return base * altura;
}

int main()
{
    float baseUsu = 0;
    float alturaUsu = 0;
    
    printf("Digite a base: ");
    scanf("%f", &baseUsu);
    
    printf("Digite a altura: ");
    scanf("%f", &alturaUsu);
    
    printf("A area é: %2.f", calcularArea(baseUsu, alturaUsu));
    
    

    return 0;
}