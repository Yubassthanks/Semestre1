/*Desenvolva um programa que
leia o nome e o preço de uma mercadoria.
Se o preço for menor do que 1000
terá um aumento de 5% no preço da mercadoria,
senão o aumento será de 7%. Mostrar o nome da mercadoria e o seu novo preço.*/



#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char name[20];
	float price;
	
	//Input
	printf(" Digite o nome da mercadoria: ");
	scanf("%s", name);
	printf("Preço da mercadoria: ");
	scanf("%f", price);
	
	//Process
	
	if(price < 1000){
		price = price - price * 5/100;
	}else{
		price = price - price * 7/100;
		
	//Output
	
	printf("o valor do/da %s será %f", name, price);
	}
	
	
	
	
}
