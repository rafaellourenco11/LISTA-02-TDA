#include <stdio.h>

int main (){

/*
    ** Função : Indicar a ordem e os resultados das expressões.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 01/10/2024
    ** Observações: -----
*/

    int cal1 = 2 + 3 - 5 * (8 / 4);
    printf("Total calculo A: %d\n", cal1);

    int cal2 = 7 * (4 / 2) + 9 - 6;
    printf("Total calculo B: %d\n", cal2);

    // Usando float para garantir precisão em operações com decimais
    float cal3 = (4.0 / 2) / 0.5 * (4 % 2) * 0.5;
    printf("Total calculo C: %.2f\n", cal3);

    int cal4 = 7 > 2 && 3 - 5 < 8;
    printf("Total calculo D: %d\n", cal4);

    int cal5 = !(3 + 5 == 5 / 2 - 1);
    printf("Total calculo E: %d\n", cal5);

    int cal6 = 7 % 3 - 8 + 4 % 2;
    printf("Total calculo F: %d\n", cal6);

    // Corrigido o símbolo de subtração
    int cal7 = 6 / 3 - 3 * 4 % 2;
    printf("Total calculo G: %d\n", cal7);

    int cal8 = 10 > 11 && 11 < 12;
    printf("Total calculo H: %d\n", cal8);

    int cal9 = 9 / 3 + 9 % 3 + 9 * 3;
    printf("Total calculo I: %d\n", cal9);

    int cal10 = 1 + 2 + 3 / 2;
    printf("Total calculo J: %d\n", cal10);

    return 0;
}

