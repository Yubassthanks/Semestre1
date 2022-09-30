#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Contar até 10 com laço for
	int i = 0;
	while(i <= 10){
		printf("%d", i);
		i+= 1+1;
	}
}
		
