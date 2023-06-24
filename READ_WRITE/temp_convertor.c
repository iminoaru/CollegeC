
/*  Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a 
C program to convert this temperature into Centigrade degrees. [ C = (F – 32) / 1.8 ]  */

#include <stdio.h>

int main(){
	
	int celcius , fahrenhiet;
	
	printf("Enter the temperature in fahrenheit: ");
	scanf("%d",&fahrenhiet);

	celcius= (fahrenhiet - 32)/1.8 ;

	printf("Temperature in celcius is: %d",celcius);

	return 0;
}
