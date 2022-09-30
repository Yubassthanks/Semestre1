/*Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h, faça um programa que leia uma distância (km),
calcule e apresente na tela, quanto tempo (horas) será necessário para um 747-300 sobrevoar a distância informada.*/
#include <stdio.h>

	int main (){
		//Var/Conf
		int speed, distance, time;
		
		printf("Distancia a percorrer (km):\n");
		scanf("%d", &distance);
		printf("Velocidade do aviao: ");
		scanf("%d",&speed);
		
		//Processamento
		
		time = distance / speed;
		
		printf("O tempo para percorrer %dkm a %dkm/h sera de %d horas",
	distance,speed,time);
		
	}