#include <stdio.h>

/*
    ** Fun��o : Verifica se um ano � bissexto.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: ---------
*/

int main() {
	
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d � bissexto.\n", ano);
    } else {
        printf("O ano %d n�o � bissexto.\n", ano);
    }

    return 0;
}

