#include<stdio.h>

//data: 01/09/2022
main(){

	//Ler 2 números inteiros e soma-los. Se a soma for maior que 35, mostrar o resultado da soma.
	int n1,n2,resultado;
	
	scanf("%d %d", &n1,&n2);
	resultado=n1+n2;
	if(resultado >35){
		printf("valor: %d", resultado);
	}else{
		printf("valor abaixo ou igual 35");
	}
	
	return 0;
}
