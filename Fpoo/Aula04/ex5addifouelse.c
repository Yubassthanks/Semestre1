/*Desenvolva um programa que
leia o nome e o pre�o de uma mercadoria.
Se o pre�o for menor do que 1000
ter� um aumento de 5% no pre�o da mercadoria,
sen�o o aumento ser� de 7%. Mostrar o nome da mercadoria e o seu novo pre�o.*/



#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char name[20];
	float price;
	
	//Input
	printf(" Digite o nome da mercadoria: ");
	scanf("%s", name);
	printf("Pre�o da mercadoria: ");
	scanf("%f", price);
	
	//Process
	
	if(price < 1000){
		price = price - price * 5/100;
	}else{
		price = price - price * 7/100;
		
	//Output
	
	printf("o valor do/da %s ser� %f", name, price);
	}
	
	
	
	
}
