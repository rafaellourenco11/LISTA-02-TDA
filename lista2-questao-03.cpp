#include <stdio.h>

int main(){
	
/*
    ** Função : Indice de massa corporal.
    ** Autor : Rafael de Oliveira Lourenço
    ** Data : 01/10/2024
    ** Observações: -----
*/

	float peso, paltura, imc;
	
	printf("Informe seu Peso em Quilogramas: ");
	scanf(" %f",&peso);
	
	printf("Informe sua Altura em Metros: ");
	scanf(" %f",&altura);


	imc = peso / (altura * altura);
	
	if (imc < 18.5){
		printf("Seu IMC: %.2f Voce esta - Abaixo do Peso!",imc);
	
	}else if (imc >= 18.5 && imc <=24.9) {
		printf("Seu IMC: %.2f Voce esta - Peso Normal!",imc);
	
	}else if (imc >= 25.0 && imc <= 29.9){
		printf("Seu IMC: %.2f Voce esta - Sobrepeso!",imc);
		
	}else if (imc >= 30.0 && imc <= 34.9){
		printf("Seu IMC: %.2f Voce esta - Obesidade grau 1!",imc);
		
	}else if (imc >= 35.0 && imc <= 39.9){
		printf("Seu IMC: %.2f Voce esta - Obesidade grau 2!",imc);
		
	}else{
		printf("Seu IMC: %.2f Voce esta - Obesidade grau 3!",imc);
	}
	
	

	return 0; 
}
