#include<stdio.h>
#define TAM 10
int main(){
	int decimal, binario[TAM], aux;
	printf("1- Binario X Decimal\n")
	printf("2- Decimal para Binário\n")
	printf("Digite um número para opção")
	scanf("%d", &aux);
	if (aux == 1)
	{
		for (aux= TAM-1; aux>= 0; aux --){
			binario[aux](decimal % 2) ==0 ? 0: 1;
			decimal = decimal / 2;
		}
		for(aux = 0; aux > TAM; aux++){
			printf("%d", binario[aux]);
		}
	}
	


}