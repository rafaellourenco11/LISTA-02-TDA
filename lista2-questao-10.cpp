#include <stdio.h>
#include <locale.h>

/*
    ** Fun��o : Recebe tr�s n�meros inteiros e imprime o maior n�mero entre eles.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: -----
*/

int main() {
	setlocale(LC_ALL, "");
	
    int num1, num2, num3, maior;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3; 
    }

    printf("O maior n�mero �: %d\n", maior);

    return 0;
}

