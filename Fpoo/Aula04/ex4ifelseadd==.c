#include <stdio.h>
#include <locale.h>

	int main(){
			setlocale(LC_ALL,"Portuguese");
			float a,b,c;
			
			//entradas
			
			printf("Digite o comprimento do primeiro lado do tri�ngulo:");
			scanf("%f", &a);
			printf("Digite o comprimento do segundo lado do tri�ngulo:");
			scanf("%f", &b);
			printf("Digite o comprimento do terceiro lado do tri�ngulo:");
			scanf("%f", &c);
			
			//Process
			if(a == b && b == c ){
				printf("o tri�ngulo � Equil�tero");
			}else if(a != b && b != c && a !=c){
				printf("O tri�ngulo � Escaleno");
			}else(a == b && b !=c){
				printf("O tri�ngulo � Is�sceles");
			}
		}
