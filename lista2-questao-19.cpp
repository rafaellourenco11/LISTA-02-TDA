#include <stdio.h>

/*
    ** Função : Verifica se uma data é válida.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: ---------
*/

int isBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int dataValida(int dia, int mes, int ano) {

    if (mes < 1 || mes > 12) {
        return 0; 
    }

    
    int diasNoMes;

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasNoMes = 31;
            break;
        case 4: case 6: case 9: case 11:
            diasNoMes = 30; 
            break;
        case 2:
            diasNoMes = isBissexto(ano) ? 29 : 28;
            break;
    }

    if (dia < 1 || dia > diasNoMes) {
        return 0; 
    }

    return 1; 
}

int main() {
    int dia, mes, ano;

    printf("Digite a data (dia, mês, ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (dataValida(dia, mes, ano)) {
        printf("A data %02d/%02d/%d é válida.\n", dia, mes, ano);
    } else {
        printf("A data %02d/%02d/%d é inválida.\n", dia, mes, ano);
    }

    return 0;
}

