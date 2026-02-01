#include <stdio.h>
#include <stdbool.h>


int main()
{

    int numero;
    float salario;
    double consumo_total;
    bool sinal_ativado;

    numero = 2023;
    salario = 7567.47;
    consumo_total = 112755.87;
    sinal_ativado = true;

    printf("\nValor numero: %d, salario: %.2f, consumo_total: %.2lf, sinal_ativado: %d", numero,salario,consumo_total,sinal_ativado);


    getchar();
    return 0;
}
