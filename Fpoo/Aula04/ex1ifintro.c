#include <stdio.h>
#include <locale.h>

	int main(){
			//config e var
			setlocale(LC_ALL,"Portuguese");
			float preco;
									
		//Entradas
		printf("Digite o valor: ");
		scanf("%f", &preco);
		
		//Process e saida
		
		
		if(preco > 1000){
			preco = preco + preco * 8 / 100;
		}
		//saida
		printf("O valor final é R$ %.2f\n", preco);			
		
	}
	
	/*Desenvolva um programa que leia o salário de um funcionário
e o número de filhos. Se o salário for menor do que 2000 o funcionário
receberá um salário família equivalente a 45 reais por filho.
Apresente o salário final.*/
