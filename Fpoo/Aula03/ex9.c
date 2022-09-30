/*Desenvolva um programa que leia
 o nome e o preço de uma mercadoria.
O programa deverá calcular um aumento de 5% no preço da mercadoria 
e mostrar o nome da mercadoria e o seu novo preço.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	//Var and conf
	setlocale(LC_ALL,"Portuguese");
	char name [20];
	int pct, price;
		//Input
	printf("Digite o nome do produto:");
	scanf("%s", &name);
	printf("Digite o valor do produto:");
	scanf("%d", &price);
	
	price = price + price * 5 / 100;
	
	//Output
	printf("O valor do %s é de R$ %d", name, price);
	








}