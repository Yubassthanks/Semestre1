#include <stdio.h>
#include <locale.h>

	int main(){
			setlocale(LC_ALL,"Portuguese");
			float a,b,c;
			
			//entradas
			
			printf("Digite o comprimento do primeiro lado do triângulo:");
			scanf("%f", &a);
			printf("Digite o comprimento do segundo lado do triângulo:");
			scanf("%f", &b);
			printf("Digite o comprimento do terceiro lado do triângulo:");
			scanf("%f", &c);
			
			//Process
			if(a == b && b == c ){
				printf("o triângulo é Equilátero");
			}else if(a != b && b != c && a !=c){
				printf("O triângulo é Escaleno");
			}else(a == b && b !=c){
				printf("O triângulo é Isósceles");
			}
		}
