/* Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	int a,b,c,d;
	printf("Digite um numero inteiro: ");
	scanf("%d",&a);
	printf("Digite outro numero inteiro: ");
	scanf("%d",&b);
	printf("Digite outro numero inteiro: ");
	scanf("%d",&c);
	d = (a + b) / c;
	printf("Valor%d",d);	
}