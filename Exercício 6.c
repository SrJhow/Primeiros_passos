#include<stdio.h>

//data: 01/09/2022
main(){	
	
	//Ler um número e imprimir: se é maior que 20, igual a 20 ou menor que 20.
	int n1;
	scanf("%d", &n1);
	if (n1 >20){
		printf("numero maior que 20");
	}else if(n1 <20){
		printf("numero menor que 20");
	}else 
		printf("numero igual a 20");
	
	
	return 0;
}
