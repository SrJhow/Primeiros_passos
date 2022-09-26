#include<stdio.h>

//data: 01/09/2022
main(){
//Transformar temperatura de farenheit celcius	
	float celsius, fahrenheit;
	
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*5/9);
	printf("\ntemperatura em celcius: %.2f", celsius);
	
	return 0;
}
