#include <stdio.h>
#include <locale.h>

/*
    ** Fun��o : Recebe tr�s n�meros inteiros e imprime os n�meros em ordem crescente.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: ------
*/

int main() {
	setlocale(LC_ALL, "");
	
    int num1, num2, num3, temp;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
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

    printf("Os n�meros em ordem crescente s�o: %d, %d, %d\n", num1, num2, num3);

    return 0;
}




	return 0;	
}
