/*Desenvolva um programa 
que leia o nome de uma cidade, o número total de eleitores e
o número total de votos apurados na última eleição. O programa deverá calcular e 
exibir a porcentagem de participação dos eleitores desta cidade na última eleição.*/

#include <stdio.h>
#include <locale.h>

int main(){
	//var n conf
	int vote, voters;
	float percent;
	char name [20];
	
	//Input
	printf("Nome da cidade:\n");
	scanf("%s", &name);
	printf("Quantidade de pessoas:\n");
	scanf("%d", &voters);
	printf("Quantidade de votos:\n");
	scanf(" %d", &vote);
	
	//Process
	
	percent = vote * 100 / voters;
	
	//Output
	
	printf("A %% de participação na eleição da cidade %s foi de %.2f%%", name, percent);
	
	
	
	
}