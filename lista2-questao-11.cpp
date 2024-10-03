#include <stdio.h>
#include <locale.h>

/*
    ** Função : Recebe três números inteiros e imprime os números em ordem crescente.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: ------
*/

int main() {
	setlocale(LC_ALL, "");
	
    int num1, num2, num3, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}




	return 0;	
}
