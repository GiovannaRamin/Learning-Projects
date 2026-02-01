#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Esperando por 2 segundos...\n");
	Sleep(2000);
	printf("Continuando a execução do programa. \n");
	system("Pause > Nul");
	return 0;
}