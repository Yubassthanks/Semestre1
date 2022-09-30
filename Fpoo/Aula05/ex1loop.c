#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	//Programa que conte até 10 com Laço FOR
	
	int i;
	for(i = 0; i <= 10; i+=1+1){
		printf("%d", i);
	}
	
	
}
