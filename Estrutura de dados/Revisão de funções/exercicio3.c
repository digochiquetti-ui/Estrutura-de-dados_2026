#include <stdio.h>

void classificarTemperatura(float temperatura) {
    if (temperatura < 15) {
        printf("O Clima está frio");
    } else if (temperatura <= 25) {
        printf("O clima está agradável");
    } else {
        printf("O clima está quente");
    }
}


int main()
{
    float temperaturaAgora = 0;
    
    printf("Digite a temperatura agora: ");
    scanf("%f", &temperaturaAgora);
    
    classificarTemperatura(temperaturaAgora);
    
    

    return 0;
}