#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i;
	
	printf("N�meros pares entre 11 e 250\n");
	
	for(i = 11; i < 250; i++){
		if(i % 2 == 0)
	printf("%d" ,i);
	}
	
}
