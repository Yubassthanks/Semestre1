/*Faça um programa que imrpima na tela a soma dos
valores pares de um intervalo definido pelo usuário.
*/

#include <stdio.h>
#include <locale.h>
//conf var
int main(){
	setlocale(LC_ALL, "Portguese");
	int v1 = -1, v2 = -1;
	int i;
	
	while(v1 < 0 || v1 > 332767){
		printf("Digite um valor inteiro:");
		scanf("%d", &v1);
	}
	while(v2 < 0 || v2 > 332767){
		printf("Digite um valor inteiro:");
		scanf("%d", &v2);
	}
	if(v2 < v1){
		int aux = v1;
		v1 = v2;
		v2 = aux;
	}
	
	int acumulado = 0;
	for(i = v1 + 1; i < v2; i++){
		acumulado += i;
	}
		printf("A soma dos valores entre %d e %d é = %d", v1, v2, acumulado);
}
