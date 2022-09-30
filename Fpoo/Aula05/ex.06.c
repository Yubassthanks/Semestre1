/*Faça um programa que imprima na tela
a soma dos valores entre 0 e 100. */

#include <stdio.h>
#include <locale.h>
//conf var
int main(){
		int i;
		int acumulado = 0;
		for(i = 0; i < 100; i++){
			acumulado += i;
		}
		printf("A soma dos valores entre 0 e 100 é : %d", acumulado);
		
}
