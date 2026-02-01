#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");
	printf("Primeiro Programa \n");
	printf("Bacana! Seu primeiro programa!\n");
	printf("Agora é só teclar algo para sair");
	
	system("PAUSE >nul");
	return 0;
}