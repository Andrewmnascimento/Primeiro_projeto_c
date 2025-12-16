#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Olá, este software é destinado à conversão de unidades de calor como Celsius e Farenheit\n");
    printf("Escolha a conversão desejada: \n");
    printf("1. Conversão de Celsius para Farenheit \n");
    printf("2. Conversão de Farenheit para Celsius\n");
    int tipo_conversao = get_int("");
    float temp_celsius;
    float temp_farenheit;
    if (tipo_conversao == 1)
    {
        printf("Tudo certo, vamos converter de Celsius para Farenheit!\n");
        temp_celsius = get_float("Qual a temperatura em Celsius? ");
        temp_farenheit = (1.8*temp_celsius) + 32;
        printf("A temperatura em Farenheit é %f\n", temp_farenheit);

    } else 
    {
        printf("Tudo certo, vamos converter de Farenheit para Celsius!\n");
        temp_farenheit = get_float("Qual a temperatura em Farenheit? ");
        temp_celsius = (temp_farenheit - 32)/1.8;
        printf("A temperatura em Celsius é %f\n", temp_celsius);
    }
    return 0;
}