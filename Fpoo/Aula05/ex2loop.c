#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Contar at� 10 com la�o for
	int i = 0;
	while(i <= 10){
		printf("%d", i);
		i+= 1+1;
	}
}
		
