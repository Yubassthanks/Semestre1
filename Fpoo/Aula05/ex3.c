#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,n = -1;
	
	while (n < 0 || n > 32767){	
	printf("Digite um valor inteiro maior do que 0:");
	scanf("%d",&n);
	

	}for(i = 1; i < n; i++){
		printf("%d", i);
	}
}
