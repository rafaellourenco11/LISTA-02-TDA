#include <stdio.h>
#include <locale.h>

/*
    ** Fun��o : Calcula a posi��o e a velocidade de uma part�cula em movimento.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: ----------
*/

int main() {
	setlocale(LC_ALL, "");
	 double s0, v0, a, t; 
    double s, v;         

    printf("Digite a posi��o inicial (s0): ");
    scanf("%lf", &s0);

    printf("Digite a velocidade inicial (v0): ");
    scanf("%lf", &v0);

    printf("Digite a acelera��o (a): ");
    scanf("%lf", &a);

    printf("Digite o tempo (t): ");
    scanf("%lf", &t);

    s = s0 + (v0 * t) + (a * t * t) / 2; 
    v = v0 + (a * t);                    

    printf("A posi��o (s) da part�cula �: %.2f\n", s);
    printf("A velocidade (v) da part�cula �: %.2f\n", v);

    return 0;
}
