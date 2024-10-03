#include <stdio.h>

int main(){
	
/*
    ** Função : Categoria de um nadador.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 01/10/2024
    ** Observações: -----
*/
	int idade;
	
	printf("Informe a Idade do Nadador: ");
	scanf(" %d",&idade);
	
	if (idade >= 4 && idade <= 7){
		printf("Sua classificacao e: Infantil A!");
	
	}else if (idade >= 8 && idade <= 9){
		printf("Sua classificacao e: Infantil B!");
		
	}else if (idade >= 10 && idade <= 12){
		printf("Sua classificacao e: Juvenil A!");
		
	}else if (idade >= 13 && idade <= 17){
		printf("Sua classificacao e: Juvenil B!");
		
	}else if (idade >= 18 && idade <= 25){
		printf("Sua classificacao e: Senior!");
		
	}else{
		printf("Idade fora da faixa etaria!");
	}

	return 0;
}
