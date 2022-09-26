//EXEMPLO 1: APRENDENDO USAR WHILE.
#include <stdio.h>

main() { 
   int contador;
   while(contador<=1000){
   	printf("Bilhete : %d\n", contador);
   	
   	contador++;
   }
 
    return 0;
}
//EXEMPLO 2: USANDO WHILE.
#include <stdio.h>

main() {	 
   int contador=1, qtde;
   
   scanf("%d", &qtde);
   while(contador<=qtde){
   	printf("Bilhete : %d\n", contador);
   	
   	//contador+=10 para ir de 10 em 10
   	contador++;
   }
 
    return 0;
}
//EXEMPLO 3: PERGUNTAR QUANTIDADE DE ALUNOS E FAZER MEDIA DE CADA UM.	
#include <stdio.h>

main() { 
   int qtdeAlunos=1, alunos, nota1, nota2, media;
   printf("digite a quantidade de alunos presentes: ");
   scanf("%d", &alunos);
   while(qtdeAlunos<=alunos){
   	   printf("nota 1 do aluno : %d\n", qtdeAlunos);
   	   scanf("%d", &nota1);
   	   printf("nota 2 do aluno : %d\n", qtdeAlunos);
       scanf("%d", &nota2);
       media=(nota1+nota2)/2;
       printf("media: %d\n", media);
   
       qtdeAlunos++;
   }
 
    return 0;
}
//EXEMPLO 4: USANDO WHILE E DEPOIS FOR. 
#include <stdio.h>
#include <stdlib.h> 
int main() {
	
   int contador=1000;
   while(contador<=9999){
   	printf("Bilhete: %d\n", contador);
   	contador++;
   	
   }
  
  system("pause");
  system("cls");
  for(contador=1000;contador<=9999;contador++){
  	printf("Bilhete: %d\n", contador);
  	
  }
    return 0;
}
//EXEMPLO 5.1: USANDO FOR.
#include <stdio.h>
 
main() {
	
 int setor, cadeira;
 for(setor=1; setor<=4;setor++){
 	for(cadeira=1; cadeira<=200; cadeira++){
 		printf("Setor: %d - Cadeira: %d\n", setor, cadeira);
	 }
 }
    
    return 0;
}
//EXEMPLO 5.2: USANDO WHILE.
#include <stdio.h>
 
main() { 
   int setor=1, cadeira;
   while(setor<=4){
   	cadeira=1;
   	while(cadeira<=200){
   		printf("Setor: %d - Cadeira: %d\n", setor, cadeira);
   		if(cadeira==150){
   			break;
   		//ou pode se usar tambem (if(cadeira==150)break;	
		   }
   		cadeira++;
   		}	   
	   setor++;
   } 
    return 0;
}
