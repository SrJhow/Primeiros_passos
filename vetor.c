#include <stdio.h>

//data: 15/09/2022
main(){
	
	int num[5],x;
	
	for(x=0; x<5; x++){
		scanf("%d",&num[x]);
	}
	
	for(x=4;x>=0;x--){
		printf("\nNumero: %d",num[x]);
		
	}
	return 0;
	
}
