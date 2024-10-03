#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, ""); 
/*
    ** Fun��o :  Calcula a m�dia de aproveitamento de um aluno e se est� aprova��o ou reprovado.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: -----
*/
    int numAluno;
    float nota1, nota2, nota3, ME, MA;
    char conceito;

    printf("Digite o n�mero de identifica��o do aluno: ");
    scanf("%d", &numAluno);

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a m�dia dos exerc�cios (ME): ");
    scanf("%f", &ME);

    MA = (nota1 + (nota2 * 2) + (nota3 * 3) + ME) / 7;

    if (MA >= 9.0) {
        conceito = 'A';
    } else if (MA >= 7.5 && MA < 9.0) {
        conceito = 'B';
    } else if (MA >= 6.0 && MA < 7.5) {
        conceito = 'C';
    } else if (MA >= 4.0 && MA < 6.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }
    
    printf("\nN�mero do Aluno: %d\n", numAluno);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("M�dia dos Exerc�cios (ME): %.2f\n", ME);
    printf("M�dia de Aproveitamento (MA): %.2f\n", MA);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}


