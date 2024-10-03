#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
    ** Fun��o : Converte coordenadas polares em cartesianas.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: ---------
*/

int main() {
	setlocale(LC_ALL, "");

	double r, a, x, y;

    printf("Digite o valor do raio (r): ");
    scanf("%lf", &r);

    printf("Digite o valor do �ngulo (a) em radianos: ");
    scanf("%lf", &a);

    x = r * cos(a);
    y = r * sin(a);
    
    printf("As coordenadas cartesianas s�o:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

	return 0;	
}
