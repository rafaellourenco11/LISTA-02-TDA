#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    ** Fun��o : Jogo de Pedra, Papel e Tesoura.
    ** Autor : Rafael de Oliveira Louren�o
    ** Data : 03/10/2024
    ** Observa��es: ---------------
*/

int main() {
	setlocale(LC_ALL, "");
	
    int usuario, computador;
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};

    srand(time(NULL));

    printf("Escolha: (0) Pedra, (1) Papel, (2) Tesoura: ");
    scanf("%d", &usuario);

    while (usuario < 0 || usuario > 2) {
        printf("Escolha inv�lida. Tente novamente: ");
        scanf("%d", &usuario);
    }

    computador = rand() % 3;
    
    printf("Voc� escolheu: %s\n", opcoes[usuario]);
    printf("Computador escolheu: %s\n", opcoes[computador]);

    if (usuario == computador) {
        printf("Empate!\n");
    } else if ((usuario == 0 && computador == 2) || 
               (usuario == 1 && computador == 0) || 
               (usuario == 2 && computador == 1)) { 
        printf("Voc� venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}

