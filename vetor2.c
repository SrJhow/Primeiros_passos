#include <stdio.h>

//data: 15/09/2022
main(){
	
	int nota[60],x;
	
	for(x=0;x<60;x++){
		nota[x]=x;
		if (x>29){
			printf("aluno2 tem a nota: %d\n", nota[x]);
			
		}else{
			printf("aluno1 tem a nota: %d\n", nota[x]);
		}
	}	
	
	
	
	return 0;

}
