#include <stdio.h>
#include <math.h>

int main(){
	
/*
    ** Função : Realiza operação entre dois números com escolha de operador.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 01/10/2024
    ** Observações: -----
*/

    float a, b, resultado;
    char c;

    printf("Informe o valor de A: ");
    scanf("%f", &a);
	
    printf("Informe o valor de B: ");
    scanf("%f", &b);
	
    printf("Informe o Operador Aritmetico (+, -, *, /, ^): ");
    scanf(" %c", &c);  
	
    
    if (c == '+'){
        resultado = a + b;
        printf("Soma entre %.2f e %.2f = %.2f\n", a, b, resultado);

    } else if (c == '-'){
        resultado = a - b;
        printf("Subtracao entre %.2f e %.2f = %.2f\n", a, b, resultado);

    } else if (c == '*'){
        resultado = a * b;
        printf("Multiplicacao entre %.2f e %.2f = %.2f\n", a, b, resultado);

    } else if (c == '/'){
        if (b == 0){
            printf("Erro: Divisao por zero nao permitida!\n");
        } else {
            resultado = a / b;
            printf("Divisao entre %.2f e %.2f = %.2f\n", a, b, resultado);
        }

    } else if (c == '^'){
        resultado = pow(a, b);  
        printf("Potenciacao (A elevado a B) entre %.2f e %.2f = %.2f\n", a, b, resultado);

    } else {
        printf("Operador Invalido!\n");
    }
	
    return 0;
}

