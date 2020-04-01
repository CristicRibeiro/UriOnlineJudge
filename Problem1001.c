'''Leia 2 variáveis, denominadas A e B e fazer a soma dessas duas variáveis, atribuindo o resultado à variável X . 
Imprima X como mostrado abaixo. Imprima a linha final após o resultado, caso contrário, você receberá " Presentation Error ".

Entrada
O arquivo de entrada conterá 2 números inteiros.

Resultado

Imprima a letra X (maiúscula) com um espaço em branco antes e depois do sinal de igual, seguido pelo valor de X, 
conforme o exemplo a seguir.
Obs .: não esqueça a linha final, afinal.
'''

#include <stdio.h>
 
int main() {
 
      int A=0, B=0, X=0;


    scanf("%d", &A);
    scanf("%d", &B);

    X = A+B;

    printf("X = %d", X);
    printf("\n");
 
    return 0;
}
