#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//data: 08/09/2022
main(){
	setlocale(LC_ALL, "Portuguese");
	double num1,num2,resultado;
	int operador=1;
	while (operador!=0){
		
		system("cls");	
		printf("\n1-soma\n2-subtra��o\n3-multiplica��o\n4-divis�o\n0-Sair");
		printf("\nDigite a opera��o desejada: ");
		scanf("%d",&operador);
		if(operador>=1 && operador<=4){
			system("cls");
			printf("\nDigite o primeiro numero: ");
			scanf("%lf",&num1);
			printf("\nDigite o segundo numero: ");
			scanf("%lf",&num2);
			
			switch(operador){
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
					printf("\nOp��o inv�lida, tente novamente\n");
					system("pause");
			}
			
			printf("\nResultado da opera��o: %.2lf\n",resultado);
		
			system("pause");
		}else if(operador!=0){
			printf("\nOp��o inv�lida, tente novamente\n");
			system("pause");
		}else{
			printf("\nsaindo da aplica��o\n");
			system("pause");
		}
    }
		return 0;
	}
