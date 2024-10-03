#include <stdio.h>
#include <math.h>
int main(){
	
/*
    ** Função : Calcular o Delta e mostrar sua condição se for positivo e resultado das raízes.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 01/10/2024
    ** Observações: -----
*/

	float a, b, c, delta, raiz1, raiz2;
	
	
	printf("Informe o Valor de A: ");
	scanf(" %f",&a);
	
	printf("Informe o Valor de B: ");
	scanf(" %f",&b);
	
	printf("Informe o Valor de C: ");
	scanf(" %f",&c);
	
	
	delta = b * b - 4 * a * c;

	if (delta < 0) {
		
        printf("A equacao nao tem solucao real.\n");
        
    } else if (delta == 0) {
    	
		 raiz1 = -b / (2 * a);
         printf("A equacao tem uma unica raiz: %.2f\n", raiz1);
         
    } else {
		
		raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao tem duas raizes reais: %.2f e %.2f\n", raiz1, raiz2);
    }
	
	
	return 0;
}


