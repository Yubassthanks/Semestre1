/*
Desenvolva um programa que leia tr�s vari�veis (a, b, c) e resolva a express�o: ( a + b ) / c.
*/
#include <stdio.h>
#include<locale.h>
int main() {	
	int a,b,c,d;
	printf("Digite um valor para a =");
	scanf("%d",&a);
	printf("Digite um valor para b = ");
	scanf("%d",&b);
	printf("Digite um valor para c = ");
	scanf("%d",&c);
	d = (a + b) / c;
	printf("%d",d);
}
	
