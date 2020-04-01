'''
Nesse problema, a tarefa é ler o código de um produto 1, o número de unidades do produto 1, o preço de uma unidade do produto 1, 
o código de um produto 2, o número de unidades do produto 2 e o preço para uma unidade do produto 2. Depois disso, calcule e mostre 
o valor a ser pago 

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores: dois inteiros e um valor flutuante com 2 dígitos 
após o ponto decimal.

Resultado
O arquivo de saída deve ser uma mensagem como o exemplo a seguir, em que "Valor a pagar" significa Valor a pagar . Lembre-se do espaço 
após ":" e depois do símbolo "R $". O valor deve ser apresentado com 2 dígitos após o ponto.
'''


#include <stdio.h>

int main(){
    int codg1, codg2, numProd1, numProd2;
    float prod1, prod2, valor;

    scanf("%d %d %f", &codg1, &numProd1, &prod1);
    scanf("%d %d %f", &codg2, &numProd2, &prod2);

    valor = (numProd1*prod1)+ (numProd2*prod2);

    printf("VALOR A PAGAR: R$ %.2f", valor);
    printf("\n");


return 0;
}
