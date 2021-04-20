
#define TAM 10
int main()
{
	//Conversão de decimais em binários

	int numeroDecimal, binario[TAM], aux;

	printf("Digite um numero decimal: ")
	scanf("%d", &numeroDecimal);
	
	for(aux = TAM -1; aux >= 0; aux ==)
	{
		binario[aux]= (numeroDecimal% 2)==0 ? 0 : 1;
		numeroDecimal = numeroDecimal / 2;
	}
	printf("\n\t")
	for(aux=0; aux < TAM; aux ++){
		printf("%d", binario[aux]);
	}
}
