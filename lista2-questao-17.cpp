#include <stdio.h>

/*
    ** Função : Verifica se um número é par ou ímpar.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: -----
*/

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}

