#include <stdio.h>
#include <stdlib.h>
/*
    ** Função : Conversões entre diferentes unidades.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações:----------------
*/

void menuPeso() {
	setlocale(LC_ALL, "");
	
    int opcao;
    double valor, resultado;

    printf("Selecione a conversão de Peso:\n");
    printf("I. Libra para Quilograma (1)\n");
    printf("II. Quilograma para Libra (2)\n");
    printf("III. Onça para Grama (3)\n");
    printf("IV. Grama para Onça (4)\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em Libras: ");
            scanf("%lf", &valor);
            resultado = valor * 0.453592;
            printf("%.2f Libras = %.2f Quilogramas\n", valor, resultado);
            break;
        case 2: 
            printf("Digite o valor em Quilogramas: ");
            scanf("%lf", &valor);
            resultado = valor * 2.20462;
            printf("%.2f Quilogramas = %.2f Libras\n", valor, resultado);
            break;
        case 3: 
            printf("Digite o valor em Onças: ");
            scanf("%lf", &valor);
            resultado = valor * 28.3495;
            printf("%.2f Onças = %.2f Gramas\n", valor, resultado);
            break;
        case 4: 
            printf("Digite o valor em Gramas: ");
            scanf("%lf", &valor);
            resultado = valor * 0.035274;
            printf("%.2f Gramas = %.2f Onças\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

void menuVolume() {
    int opcao;
    double valor, resultado;

    printf("Selecione a conversão de Volume:\n");
    printf("I. Galão para Litro (1)\n");
    printf("II. Litro para Galão (2)\n");
    printf("III. Onça para Mililitro (3)\n");
    printf("IV. Mililitro para Onça (4)\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("Digite o valor em Galões: ");
            scanf("%lf", &valor);
            resultado = valor * 3.78541;
            printf("%.2f Galões = %.2f Litros\n", valor, resultado);
            break;
        case 2:
            printf("Digite o valor em Litros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.264172;
            printf("%.2f Litros = %.2f Galões\n", valor, resultado);
            break;
        case 3: 
            printf("Digite o valor em Onças: ");
            scanf("%lf", &valor);
            resultado = valor * 29.5735;
            printf("%.2f Onças = %.2f Mililitros\n", valor, resultado);
            break;
        case 4: 
            printf("Digite o valor em Mililitros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.033814;
            printf("%.2f Mililitros = %.2f Onças\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

void menuComprimento() {
    int opcao;
    double valor, resultado;

    printf("Selecione a conversão de Comprimento:\n");
    printf("I. Milha para Quilômetro (1)\n");
    printf("II. Quilômetro para Milha (2)\n");
    printf("III. Jardas para Metro (3)\n");
    printf("IV. Metro para Jardas (4)\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("Digite o valor em Milhas: ");
            scanf("%lf", &valor);
            resultado = valor * 1.60934;
            printf("%.2f Milhas = %.2f Quilômetros\n", valor, resultado);
            break;
        case 2: 
            printf("Digite o valor em Quilômetros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.621371;
            printf("%.2f Quilômetros = %.2f Milhas\n", valor, resultado);
            break;
        case 3: 
            printf("Digite o valor em Jardas: ");
            scanf("%lf", &valor);
            resultado = valor * 0.9144;
            printf("%.2f Jardas = %.2f Metros\n", valor, resultado);
            break;
        case 4: 
            printf("Digite o valor em Metros: ");
            scanf("%lf", &valor);
            resultado = valor * 1.09361;
            printf("%.2f Metros = %.2f Jardas\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    int categoria;

    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Escolha a categoria de conversão:\n");
    printf("1. Peso\n");
    printf("2. Volume\n");
    printf("3. Comprimento\n");
    printf("Escolha uma opção: ");
    scanf("%d", &categoria);

    switch (categoria) {
        case 1:
            menuPeso();
            break;
        case 2:
            menuVolume();
            break;
        case 3:
            menuComprimento();
            break;
        default:
            printf("Categoria inválida!\n");
    }

    return 0;
}

