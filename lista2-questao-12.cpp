#include <stdio.h>
#include <locale.h>

/*
    ** Função : Calcula a média de notas para determinar se o aluno foi aprovado ou reprovado.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: -------.
*/

int main() {
	setlocale(LC_ALL, "");

  float P1, P2, P3, mediaFinal;

    printf("Digite a nota da primeira prova (P1): ");
    scanf("%f", &P1);
    
    printf("Digite a nota da segunda prova (P2): ");
    scanf("%f", &P2);

    if ((P1 >= 3.0 && P2 >= 3.0) && ((P1 + P2) / 2 >= 5.0)) {
        mediaFinal = (P1 + P2) / 2;
        printf("Média final: %.2f\n", mediaFinal);
        printf("Aprovado\n");
        
    } else {
        printf("Digite a nota da terceira prova (P3): ");
        scanf("%f", &P3);

        if (P1 > P2) {
            mediaFinal = (P1 + P3) / 2;
        } else {
            mediaFinal = (P2 + P3) / 2;
        }

        printf("Média final: %.2f\n", mediaFinal);

        if (mediaFinal >= 5.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
	return 0;	
}
