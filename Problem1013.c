'''
Faça um programa que leia 3 valores inteiros e apresente o maior, seguido da mensagem "eh o maior". Use a seguinte fórmula:



Entrada
O arquivo de entrada contém 3 valores inteiros.
autor:cristina ribeiro
Resultado
Imprima o maior desses três valores, seguido por um espaço e a mensagem "eh o maior".
'''

#include <stdio.h>

int main(){

    int num1, num2, num3, MaiorAB;

    scanf("%d %d %d", &num1, &num2, &num3);


    if (num1>num2){
        MaiorAB = num1;
    }
    else
        MaiorAB = num2;

    if (MaiorAB<num3){
        MaiorAB = num3;
    }


    printf("%d eh o maior", MaiorAB);
    printf("\n");


return 0;

}
