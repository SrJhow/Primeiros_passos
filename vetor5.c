#include <stdio.h>

//data: 15/09/2022

main(){
	float nota1,nota2,media[3];
	int x;
	for(x=0;x<3;x++){
		printf("Digite a nota 1 do aluno %d: ",x+1);
		scanf("%f",&nota1);
		printf("Digite a nota 2 do aluno %d: ",x+1);
		scanf("%f",&nota2);
		media[x]=(nota1+nota2)/2;
	}
	for(x=0;x<3;x++){
		printf("\nMedia do aluno %d: %2.f",x+1, media[x]);
	}	
				
	
	return 0;
}
