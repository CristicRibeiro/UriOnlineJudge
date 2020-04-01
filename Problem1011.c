'''
Faça um programa que calcule e mostre o volume de uma esfera que recebe o valor de seu raio (R). A fórmula para calcular o volume é: 
(4/3) * pi * R 3 . Considere (atribuir) para pi o valor 3,14159.

Dica: Use (4 / 3.0) ou (4.0 / 3) em sua fórmula, porque alguns idiomas (incluindo C ++) assumem que o resultado da divisão entre 
dois números inteiros é outro número inteiro. :)

Entrada
A entrada contém um valor de ponto flutuante (precisão dupla).

Resultado

A saída deve ser uma mensagem "VOLUME", como no exemplo a seguir, com um espaço antes e depois do sinal de igual. O valor deve ser 
apresentado com 3 dígitos após o ponto decimal.
'''

#include <stdio.h>
#define PI 3.14159

int main(){

    double R, volume;


    scanf("%lf", &R);

    volume = ((4.0/3)* PI) * (R*R*R);
    printf("VOLUME = %0.3lf", volume);
    printf("\n");



return 0;
}

