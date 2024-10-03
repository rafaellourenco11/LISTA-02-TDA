#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, ""); 
/*
    ** Função : Ler dois números inteiros e calcular quantos % maior um número é em relação a outro ou menor.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: -----
*/	
    int num1, num2, porcentagem;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: O segundo número não pode ser zero.\n");
        return 1;
    }

    if (num1 > num2) {
        porcentagem = (num1 - num2) * 100 / num2;
        printf("%d é %d%% maior que %d.\n", num1, porcentagem, num2);
    } else if (num1 < num2) {
        porcentagem = (num2 - num1) * 100 / num1;
        printf("%d é %d%% menor que %d.\n", num1, porcentagem, num2);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
