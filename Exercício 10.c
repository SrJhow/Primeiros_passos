#include<stdio.h>
#include<locale.h>

//data: 31/08/2022
main(){
//Permitir que o usu�rio informa dois valores e ele insira qual opera��o ele deseja fazer (op��es s�o 1- soma, 2-subtra��o, 3-divis�o, 4-multiplica��o)	
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, resultado;
	int op;
	printf("digite os dois valores: ");
	scanf("%f %f",&num1,&num2);
	printf("Digite 1 para soma\nDigite 2 para subtracao\nDigite 3 para multiplicacao\nDigite 4 para divisao\nDigite a operacao desejada: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			resultado=num1+num2;
		break;
		case 2:
			resultado=num1-num2;
		break;
		case 3:
			resultado=num1*num2;
		break;
		case 4:
			resultado=num1/num2;
		break;
		default:
			printf("opcao invalida\n");
	}
	if (op >0 && op<5){
        printf("O resultado da operacao: %.2f", resultado);
	}
	
	
	return 0;
}
