'''
O pequeno John quer calcular e mostrar a quantidade de litros de combustível gasto em uma viagem, usando um carro com 12 Km / L. 
Para isso, ele gostaria que você o ajudasse através de um programa simples. Para realizar o cálculo, é necessário ler o tempo gasto 
(em horas) e a mesma velocidade média (km / h). Dessa forma, você pode obter distância e calcular quantos litros seriam necessários. 
Mostre o valor com três casas decimais após o ponto.

Entrada
O arquivo de entrada contém dois números inteiros. O primeiro é o tempo gasto na viagem (em horas). O segundo é a velocidade média 
durante a viagem (em Km / h).

Resultado
Imprima quantos litros seriam necessários para fazer essa viagem, com três dígitos após o ponto decimal
'''

#include <stdio.h>

int main() {
    int tempo, velocidade, tanque;
    float totalLitros;

    tanque = 12;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    totalLitros = (velocidade/12.00)*tempo;
    printf("%.3f", totalLitros);
    printf("\n");

return 0;
}
