#include <stdio.h>

/*
    ** Função : Verifica se um ano é bissexto.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: ---------
*/

int main() {
	
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}

