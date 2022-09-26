#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//data: 15/09/2022

main(){
	float nota1[3],nota2[3],media,media2;
	int x;
	for(x=0;x<3;x++){
		printf("Digite a nota: \n");
		scanf("%f %f",&nota1[x],&nota2[x]);
		media=media+nota1[x];
		media2=media2+nota2[x];
		
	}
	media=media/3;
	media2=media2/3;
	
	for(x=0;x<3;x++){
		printf("Nota1: %2.f\n",nota1[x]);
		printf("Nota2: %2.f\n",nota2[x]);
	}
	printf("A media da nota1: %2.f\n",media);
	printf("A media da nota2: %2.f\n",media2);
	
	return 0;
}
