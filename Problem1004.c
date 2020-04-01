'''
Leia dois valores inteiros. Depois disso, calcule o produto entre eles e armazene o resultado em uma variável chamada PROD . 
Imprima o resultado como no exemplo abaixo. Não se esqueça de imprimir o final da linha após o resultado, caso contrário, 
você receberá "Presentation Error" .

Entrada
O arquivo de entrada contém 2 números inteiros.
Autor: Cristina Ribeiro
Resultado
Imprima PROD de acordo com o exemplo a seguir, com um espaço em branco antes e depois do sinal de igual.
'''

#include <stdio.h>

int main() {
    int A, B, PROD;

    scanf("%d", &A);
    scanf("%d", &B);

    PROD = A*B;

    printf("PROD = %d", PROD);
    printf("\n");


return 0;
}
