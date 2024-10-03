#include <stdio.h>
#include <locale.h>

/*
    ** Função : Recebe três números inteiros e imprime o maior número entre eles.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: -----
*/

int main() {
	setlocale(LC_ALL, "");
	
    int num1, num2, num3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3; 
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}

