#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
    ** Função : Converte coordenadas polares em cartesianas.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: ---------
*/

int main() {
	setlocale(LC_ALL, "");

	double r, a, x, y;

    printf("Digite o valor do raio (r): ");
    scanf("%lf", &r);

    printf("Digite o valor do ângulo (a) em radianos: ");
    scanf("%lf", &a);

    x = r * cos(a);
    y = r * sin(a);
    
    printf("As coordenadas cartesianas são:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

	return 0;	
}
