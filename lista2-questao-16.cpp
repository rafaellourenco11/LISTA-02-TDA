#include <stdio.h>
#include <stdlib.h>
/*
    ** Fun��o : Convers�es entre diferentes unidades.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es:----------------
*/

void menuPeso() {
	setlocale(LC_ALL, "");
	
    int opcao;
    double valor, resultado;

    printf("Selecione a convers�o de Peso:\n");
    printf("I. Libra para Quilograma (1)\n");
    printf("II. Quilograma para Libra (2)\n");
    printf("III. On�a para Grama (3)\n");
    printf("IV. Grama para On�a (4)\n");
    printf("Escolha uma op��o: ");
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
            printf("Digite o valor em On�as: ");
            scanf("%lf", &valor);
            resultado = valor * 28.3495;
            printf("%.2f On�as = %.2f Gramas\n", valor, resultado);
            break;
        case 4: 
            printf("Digite o valor em Gramas: ");
            scanf("%lf", &valor);
            resultado = valor * 0.035274;
            printf("%.2f Gramas = %.2f On�as\n", valor, resultado);
            break;
        default:
            printf("Op��o inv�lida!\n");
    }
}

void menuVolume() {
    int opcao;
    double valor, resultado;

    printf("Selecione a convers�o de Volume:\n");
    printf("I. Gal�o para Litro (1)\n");
    printf("II. Litro para Gal�o (2)\n");
    printf("III. On�a para Mililitro (3)\n");
    printf("IV. Mililitro para On�a (4)\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("Digite o valor em Gal�es: ");
            scanf("%lf", &valor);
            resultado = valor * 3.78541;
            printf("%.2f Gal�es = %.2f Litros\n", valor, resultado);
            break;
        case 2:
            printf("Digite o valor em Litros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.264172;
            printf("%.2f Litros = %.2f Gal�es\n", valor, resultado);
            break;
        case 3: 
            printf("Digite o valor em On�as: ");
            scanf("%lf", &valor);
            resultado = valor * 29.5735;
            printf("%.2f On�as = %.2f Mililitros\n", valor, resultado);
            break;
        case 4: 
            printf("Digite o valor em Mililitros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.033814;
            printf("%.2f Mililitros = %.2f On�as\n", valor, resultado);
            break;
        default:
            printf("Op��o inv�lida!\n");
    }
}

void menuComprimento() {
    int opcao;
    double valor, resultado;

    printf("Selecione a convers�o de Comprimento:\n");
    printf("I. Milha para Quil�metro (1)\n");
    printf("II. Quil�metro para Milha (2)\n");
    printf("III. Jardas para Metro (3)\n");
    printf("IV. Metro para Jardas (4)\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("Digite o valor em Milhas: ");
            scanf("%lf", &valor);
            resultado = valor * 1.60934;
            printf("%.2f Milhas = %.2f Quil�metros\n", valor, resultado);
            break;
        case 2: 
            printf("Digite o valor em Quil�metros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.621371;
            printf("%.2f Quil�metros = %.2f Milhas\n", valor, resultado);
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
            printf("Op��o inv�lida!\n");
    }
}

int main() {
    int categoria;

    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Escolha a categoria de convers�o:\n");
    printf("1. Peso\n");
    printf("2. Volume\n");
    printf("3. Comprimento\n");
    printf("Escolha uma op��o: ");
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
            printf("Categoria inv�lida!\n");
    }

    return 0;
}

