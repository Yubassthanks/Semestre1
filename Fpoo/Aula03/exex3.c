


#include<stdio.h>
int main(){
	//setar variaveis que serao utilizadas
	int velocidade, distancia, tempo;
	
	//mostrar um texto ao usuario
	printf("Velocidade km/h: ");
	/*recebe o dado digitado pelo usuario e o define na variavel
	de velocidade
	*/scanf("%d",&velocidade);
	
	//print de texto solicitando distancia
	printf("Distancia a ser percorrida: ");
	//recebe o numero inteiro e o guarda na variavel de distancia
	scanf("%d",&distancia);
	
	/*calcula o tempo baseado na distancia dividido por velocidade
	e o salva na variavel de tempo*/
	 tempo = distancia/velocidade;
	
	/*mostra o texto com o resultado, cada %d será definido após as
	aspas, em ordem que deseja que seja mostrado e separados por
	virgula. como coloquei 3 %d, informo 3 variaveis na ordem que
	quero mostrar.*/
	printf("O tempo para percorrer %dkm a %dkm/h sera de %d horas",
	distancia, velocidade, tempo);
}

