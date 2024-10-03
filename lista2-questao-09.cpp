#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, ""); 
/*
    ** Fun��o : Ler dois n�meros inteiros e calcular quantos % maior um n�mero � em rela��o a outro ou menor.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: -----
*/	
    int num1, num2, porcentagem;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: O segundo n�mero n�o pode ser zero.\n");
        return 1;
    }

    if (num1 > num2) {
        porcentagem = (num1 - num2) * 100 / num2;
        printf("%d � %d%% maior que %d.\n", num1, porcentagem, num2);
    } else if (num1 < num2) {
        porcentagem = (num2 - num1) * 100 / num1;
        printf("%d � %d%% menor que %d.\n", num1, porcentagem, num2);
    } else {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}
