/*Desenvolva um programa
 que leia o raio (cm) e a altura (cm) de um cilindro.
  Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.*/
  
#include <stdio.h>
#include <locale.h>

int main (){
	//Conf e var
	//New f: added const float for pi 
	float radius, height, area, volume;
	const float pi = 3.14;
	
	//Input
	printf("Digite o raio do cilindro:");
	scanf("%f", &radius);
	printf("Digite a altura do cilindro:");
	scanf("%f", &height);
	
	//Process
	area = (2 * pi * radius * height) + 2 * (pi *(radius * radius));
	volume = pi * (radius * radius) * height;
	
	//Output
	printf("Um cilindro de raio %.1f cm e altura %.1f cm tem area total de: %.2f cm² \n", radius, height, area);
	printf(" Um cilindro de volume %.1f cm e altura %1.f cm tem volume de: %2.f cm³",radius, height, volume);
	
	
	
	

	
	
}