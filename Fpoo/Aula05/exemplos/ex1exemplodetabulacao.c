#include <stdio.h>
#include <locale.h>
//
int main(){
	//var/conf
	setlocale(LC_ALL, "Portuguese");
	int n;
	int tabulacao = 20;
	//Input
	for(n = 11; n <= 199; n++){	
		if(n<100) printf("0");
		printf("%d",n);
		if(tabulacao == n){
			printf("\n");
			tabulacao += 10;
		}else{
			printf("\t");
		}	
	}
}
