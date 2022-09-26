#include<stdio.h>

//data: 01/09/2022
main(){
	//Transformar temperatura de celcius para farenheit
	float celsius, fahrenheit;
	
	scanf("%f",&celsius);
	fahrenheit=((celsius*9)/5)+32;
	printf("\ntemperatura em fahrenheit: %.2f",fahrenheit);
	
	return 0;
}
