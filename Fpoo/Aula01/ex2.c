#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = -2147483647;
	char a = 'A';
	char b = 'B';
	printf("x = %d\n", x);
	printf("a = %c\n", a);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;

}
