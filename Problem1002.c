'''A fórmula para calcular a área de uma circunferência é definida como A = π. R 2 . Considerando esse problema que π = 3,14159 :

Calcule a área usando a fórmula dada na descrição do problema.

Entrada
A entrada contém um valor de ponto flutuante (precisão dupla), que é a variável R .

Resultado
Apresente a mensagem "A =" seguida do valor da variável, como no exemplo abaixo, com quatro casas após o ponto decimal. 
Use todas as variáveis de precisão dupla. Como todos os problemas, não se esqueça de imprimir o final da linha após o resultado, 
caso contrário, você receberá "Erro de apresentação".
'''


#include <stdio.h>
#define n 3.14159



int main (){
    double R, A;


    scanf("%lf", &R);

    A = n*(R*R);

    printf("A=%.4lf", A);
    printf("\n");
return 0;
}
