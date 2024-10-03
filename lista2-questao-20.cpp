#include <stdio.h>

/*
    ** Função : Converte temperaturas entre Celsius e Fahrenheit.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: ----------
*/

int main() {
    float temperatura, temperaturaConvertida;
    int escolha;

    printf("Selecione a conversão desejada:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        temperaturaConvertida = (temperatura * 9 / 5) + 32;
        printf("%.2f Celsius é igual a %.2f Fahrenheit.\n", temperatura, temperaturaConvertida);
        
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        temperaturaConvertida = (temperatura - 32) * 5 / 9;
        printf("%.2f Fahrenheit é igual a %.2f Celsius.\n", temperatura, temperaturaConvertida);
        
    } else {
        printf("Opção inválida! Por favor, escolha 1 ou 2.\n");
    }

    return 0;
}

