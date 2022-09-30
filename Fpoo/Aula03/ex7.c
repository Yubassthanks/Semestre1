/*Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem
 que faz entre a fazenda e a fábrica de suco de laranja.
  Um alqueire de terra produz em média 250 toneladas de laranjas.
Faça um programa que leia quantos caminhões e quantos alqueires
uma fazenda produtora de laranjas possui,calcule e apresente na tela quantas
viagens de caminhão serão necessárias para transportar toda a colheita de laranjas.*/
#include <stdio.h>
#include <locale.h>
		
	int main(void){
		setlocale(LC_ALL, "Portuguese");
		float alqueires, caminhoes, voltas, totaldealqueires, totaldecaminhoes;
		
		printf("Digite a quantidade de alqueires que a fazenda possui:\n");
		scanf("%d", &alqueires);
		printf("Digite a quantidade de caminhoes que a fazenda possui:\n");
		scanf("%d", &caminhoes);
		
		//Process
		totaldealqueires = alqueires * 250;
		totaldecaminhoes = caminhoes * 18;
		voltas = totaldealqueires / totaldecaminhoes;
		
		printf("Será necessário %f voltas para coletar todas as laranjas.",voltas);
		
	
		
	}