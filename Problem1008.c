'''
Escreva um programa que leia o número de um funcionário, o número de horas trabalhadas em um mês e o valor que ele recebeu por hora. 
Imprima o número e o salário do funcionário que ele receberá no final do mês, com duas casas decimais.

Não se esqueça de imprimir o final da linha após o resultado, caso contrário, você receberá o "Erro de apresentação".
Não esqueça o espaço antes e depois do sinal de igual e depois do U $.
Entrada

O arquivo de entrada contém 2 números inteiros e 1 valor de ponto flutuante, representando o número, o valor das horas trabalhadas 
e o valor que o funcionário recebe por hora trabalhada.

Resultado
Imprima o número e o salário do funcionário, de acordo com o exemplo fornecido, com um espaço em branco antes e depois do sinal de igual.
'''

#include <stdio.h>

int main() {
    int NUMERO, HorasTrab;
    float valorHora, SALARIO;

    scanf("%d", &NUMERO);
    scanf("%d", &HorasTrab);
    scanf("%f", &valorHora);

    SALARIO = HorasTrab*valorHora;

    printf("NUMBER = %d", NUMERO);
    printf("\n");
    printf("SALARY = U$ %.2f", SALARIO);
    printf("\n");




return 0;
}
