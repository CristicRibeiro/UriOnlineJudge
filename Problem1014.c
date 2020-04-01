'''
Calcule o consumo médio de um carro, fornecendo a distância total percorrida (em Km) e o total de combustível usado (em litros).

Entrada

O arquivo de entrada contém dois valores: um valor inteiro X que representa a distância total (em Km) e o segundo é um número de ponto 
flutuante Y que  representa o total de combustível usado, com um dígito após o ponto decimal.

Resultado
Apresente um valor que represente o consumo médio de um carro com 3 dígitos após o ponto decimal, seguido pela mensagem "km / l".
'''

#include <stdio.h>

int main(){
    int X;
    float Y, consumo;


    scanf("%d", &X);
    scanf("%f", &Y);

    consumo = X/Y;

    printf("%.3f km/l", consumo);
    printf("\n");


return 0;
}
