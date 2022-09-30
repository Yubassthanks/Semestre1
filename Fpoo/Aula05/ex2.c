#include <stdio.h>
#include <locale.h>
//
int main(){
	//var/conf
	setlocale(LC_ALL, "Portuguese");
	int n, tab=190;
	
	//Input
	for(n = 199; n >= 1; n--){
		printf("%d\n",n);
		if(tab == n){
		 	printf("\n");
			tab-=10;
		}
		else printf("\t");
	}
}
