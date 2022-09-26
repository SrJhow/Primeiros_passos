#include <stdio.h>

//data: 15/09/2022

main(){
	float nota1[3],nota2[3],media;
	int x;
	for(x=0;x<3;x++){
		printf("Digite a nota 1 do aluno %d: ",x+1);
		scanf("%f\n",&nota1[x]);
		printf("Digite a nota 2 do aluno %d: ",x+1);
		scanf("%f\n",&nota2[x]);
	}
	for(x=0;x<3;x++){
		media=(nota1[x]+nota2[x])/2;
		printf("\nMedia: %2.f", media);
	}	
				
	
	return 0;
}
