'''
Leia três valores (variáveis ​​A, B e C), que são as três notas do aluno. Em seguida, calcule a média, considerando
que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 a 10,0, 
sempre com uma casa decimal.

Entrada

O arquivo de entrada contém 3 valores de pontos flutuantes com um dígito após o ponto decimal.

Resultado
Imprima MÍDIA (média em português) de acordo com o exemplo a seguir, com um espaço em branco antes e depois do sinal de igual.
'''

#include <stdio.h>

int main(){
    float A, B, C, MEDIA;
    float NotaA = 2, NotaB = 3, NotaC = 5;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    MEDIA = ((A*NotaA)+ (B*NotaB) + (C*NotaC))/(NotaA+NotaB+NotaC);

    printf("MEDIA = %.1f", MEDIA);
    printf("\n");



return 0;

}
