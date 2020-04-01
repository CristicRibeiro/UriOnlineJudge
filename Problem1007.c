'''
Leia quatro valores inteiros denominados A, B, C e D. Calcule e imprima a diferença do produto A e B pelo produto de C e D (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Resultado
Imprima DIFERENCA (DIFERENÇA em português) com todas as letras maiúsculas, conforme o exemplo a seguir, com um espaço em branco antes 
e depois do sinal de igual.
'''

#include <stdio.h>

int main(){
    int A, B, C, D;
    int difProduto;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    difProduto = (A*B)- (C*D);
    printf("DIFERENCA = %d", difProduto);
    printf("\n");

return 0;
}
