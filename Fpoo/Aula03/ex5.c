/*Desenvolva um programa que leia um número ”n” inteiro,
positivo e diferente de zero e apresente na tela : n – 1, e também n + 1.*/
#include <stdio.h>
#include <locale.h>

int main() {
// Variaveis e config
	setlocale(LC_ALL, "");
	int numero, resultado1, resultado2;
	
	//Entradas
	printf("Digite um número:");
	scanf("%d", &numero);
	
	//Processamentos
	
	resultado1 = numero + 1;
	resultado2 = numero - 1;	
	
	//saida
	
	printf("os valores serão %d,%d,%d", numero, resultado1, resultado2);
	
	


}