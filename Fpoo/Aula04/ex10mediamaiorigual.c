#include <stdio.h>
#include <locale.h>

int main(){
	int n1, n2, n3;
	float media;
	
	printf("Digite as tr�s notas do aluno:");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	//Process output
	
	media = (n1 + n2 + n2) / 3;
		if(media >= 6){
			printf("Sua m�dia � %.1f voc� foi Aprovado", media);
		}else if (media >= 4){
			printf("Sua m�dia � %.1f est� de recupera��o", media);
		}else{
			printf("Sua m�dia � %.1f foi reprovao", media);
		}
	
	
	
}
