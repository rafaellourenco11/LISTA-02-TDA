#include <stdio.h>
#include <locale.h>

/*
    ** Função : Calcula a posição e a velocidade de uma partícula em movimento.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: ----------
*/

int main() {
	setlocale(LC_ALL, "");
	 double s0, v0, a, t; 
    double s, v;         

    printf("Digite a posição inicial (s0): ");
    scanf("%lf", &s0);

    printf("Digite a velocidade inicial (v0): ");
    scanf("%lf", &v0);

    printf("Digite a aceleração (a): ");
    scanf("%lf", &a);

    printf("Digite o tempo (t): ");
    scanf("%lf", &t);

    s = s0 + (v0 * t) + (a * t * t) / 2; 
    v = v0 + (a * t);                    

    printf("A posição (s) da partícula é: %.2f\n", s);
    printf("A velocidade (v) da partícula é: %.2f\n", v);

    return 0;
}
