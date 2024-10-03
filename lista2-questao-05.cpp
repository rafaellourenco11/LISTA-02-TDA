#include <stdio.h>

int main(){
	
/*
    ** Função : Informar o tipo do Triângulo.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 01/10/2024
    ** Observações: -----
*/
    int a, b, c;

    printf("Informe o valor do lado A: ");
    scanf("%d", &a);

    printf("Informe o valor do lado B: ");
    scanf("%d", &b);

    printf("informe o valor do lado C: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero: todos os lados sao iguais.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isoscele: dois lados sao iguais.\n");
        } else {
            printf("Triangulo Escaleno: todos os lados sao diferentes.\n");
        }
    } else {
        printf("Os valores informados nao podem formar um triangulo.\n");
    }

    return 0;
}
	
	



