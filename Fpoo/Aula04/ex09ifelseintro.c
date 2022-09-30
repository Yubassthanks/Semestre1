#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		float salario, inssR, inssP, salarioL;
		
		//Entradas
		printf("Digite o seu salário:");
		scanf("%f", &salario);
		
		//Processamento (Orde crescente)
		
		if(salario < 1212){
			inssP = 7.5 / 100;
			inssR = salario * inssP;
		}else if(salario < 2427.36){
			inssP = (float)  9 / 100;
			inssR = salario * inssP;
		}else if(salario < 3641.04){
			inssP = (float) 12 / 100;
			inssR = salario * inssP;
		}else if(salario , 7087.23){
			inssP = (float) 14 / 100;
			inssR = 7087.22 * inssP;
		}
		//Calculo do INSS em R$
		salarioL = salario - inssR;
		
		//saida
		printf("O desconto do INSS será de R$ %.2f", inssR);
		printf("O salário final será de R$ %2.f", salarioL);
}
