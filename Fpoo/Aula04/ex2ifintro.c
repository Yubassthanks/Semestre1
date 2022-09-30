##include <stdio.h>
##include <locale.h>

	int main(){
			setlocale(LC_ALL,"Portuguese");
			float salario, salFamilia = 0;
			int filhos;
			
			//Entradas
			printf("Digite seu salário: ");
			scanf("%f", &salario);
			printf("Quantidade de filhos: ");
			scanf("%d", &filhos);
			
			//Process
			if(salario < 2000.00){
				salFamilia = 45 * filhos;
			}

		//Saida
		
		printf("O seu salário é R$ %2.f\n", salario);
		printf("O salário família é R$ %.f\n", salFamilia );
		printf("O seu salário final é R$ %2.f\n", salario + salFamilia);
		
		}
