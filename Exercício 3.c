#include<stdio.h>

//data: 31/08/2022
main(){
	
	//Ler um número e se for maior que 50 imprimir a metade desse número.
	int numero;
	scanf("%d", &numero);
	if(numero>50){
		printf("\n%d", numero/2);
	}else{
		printf("\n%d", numero);

	}
		
	return 0;
}
