#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, ""); 
/*
    ** Função : calcular o gasto total da granja para marcar todos os seus frangos.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 03/10/2024
    ** Observações: -----
*/
	int quantidade_frango;
	float gasto_total, pe_esquerdo, pe_direito;

	
	printf("Informe a Quantidade de Frangos da Granja: ");
	scanf(" %d",&quantidade_frango);
	
	if (quantidade_frango > 0){
		gasto_total = quantidade_frango * 8;
		printf("Total gasto para marcar %.2d fragos = %.2f reais", quantidade_frango,gasto_total );
		
	}else{
		printf("Quantidade de Frangos invalida!");
	}

	return 0;
}
