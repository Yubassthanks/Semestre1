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
		printf("O valor final � R$ %.2f\n", preco);			
		
	}
	
	/*Desenvolva um programa que leia o sal�rio de um funcion�rio
e o n�mero de filhos. Se o sal�rio for menor do que 2000 o funcion�rio
receber� um sal�rio fam�lia equivalente a 45 reais por filho.
Apresente o sal�rio final.*/
