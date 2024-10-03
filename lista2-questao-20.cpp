#include <stdio.h>

/*
    ** Fun��o : Converte temperaturas entre Celsius e Fahrenheit.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: ----------
*/

int main() {
    float temperatura, temperaturaConvertida;
    int escolha;

    printf("Selecione a convers�o desejada:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Escolha uma op��o (1 ou 2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        temperaturaConvertida = (temperatura * 9 / 5) + 32;
        printf("%.2f Celsius � igual a %.2f Fahrenheit.\n", temperatura, temperaturaConvertida);
        
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        temperaturaConvertida = (temperatura - 32) * 5 / 9;
        printf("%.2f Fahrenheit � igual a %.2f Celsius.\n", temperatura, temperaturaConvertida);
        
    } else {
        printf("Op��o inv�lida! Por favor, escolha 1 ou 2.\n");
    }

    return 0;
}

