'''Leia dois valores inteiros, neste caso, as variáveis ​​A e B. Depois disso, calcule a soma entre eles e atribua-a à variável SOMA . 
Escreva o valor desta variável.

Entrada

O arquivo de entrada contém 2 números inteiros.

Resultado
Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois do sinal de igual seguido pelo valor 
correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim da linha, caso contrário você receberá 
"Erro de apresentação"
'''


#include <stdio.h>


int main(){

    int A, B, SOMA;

    scanf("%d", &A);
    scanf("%d", &B);

    SOMA = A+B;
    printf("SOMA = %d", SOMA);
    printf("\n");



return 0;
}
