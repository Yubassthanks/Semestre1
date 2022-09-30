/*Desenvolva um programa que leia o nome de um time 
de futebol, o número de vitórias e o número de empates. O programa deverá calcular e apresentar na tela, o nome do time e o total de pontos.
Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto.*/

#include <stdio.h>
#include <locale.h>
	//Var/Conf
	int main(){
		int victories, ties, totalpoints;
		char name [10] ;
		
		
		printf("Team name:\n");
		scanf("%s", &name);
		printf("Number of victories\n");
		scanf("%d", &victories);
		printf("Number of ties\n");
		scanf("%d", &ties);
		
		//Process
		totalpoints = victories * 3 + ties;
		
		printf("The %s has %d points", name, totalpoints);
		
		
		
	}