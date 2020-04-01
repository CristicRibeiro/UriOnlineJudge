'''
Leia um valor inteiro, que é a duração em segundos de um determinado evento em uma fábrica e informe-o expresso em horas: 
minutos: segundos.

Entrada
O ficheiro de entrada contém um número inteiro N .

Resultado
Imprima o tempo de leitura no arquivo de entrada (segundos) convertido em horas: minutos: segundos, como no exemplo a seguir.
'''

#include <stdio.h>

int main (){
    int valor, hora, minuto, segundo;


    scanf("%d", &valor);

    hora = valor/3600;
    minuto = (valor-(hora*3600))/60;
    segundo = (valor-(hora*3600)- (minuto*60));

    printf("%d:%d:%d", hora, minuto, segundo);
    printf("\n");



return 0;
}
