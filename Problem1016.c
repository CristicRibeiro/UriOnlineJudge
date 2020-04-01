'''
Dois carros (X e Y) partem na mesma direção. O carro X sai com uma velocidade constante de 60 km / h e o carro Y sai com uma velocidade 
constante de 90 km / h.

Em uma hora (60 minutos), o carro Y pode ficar a uma distância de 30 quilômetros do carro X, ou seja, pode ficar um quilômetro a 
cada 2 minutos.


Leia a distância (em km) e calcule quanto tempo leva (em minutos) para o carro Y percorrer essa distância em relação ao outro carro.

Entrada
O arquivo de entrada contém 1 valor inteiro.

Resultado
Imprima o tempo necessário seguido da mensagem "minutos", que significa minutos em português.
'''

#include <stdio.h>

int main(){
    int distancia, tempo, X, Y;

    scanf("%d", &distancia);

    tempo = distancia*2;
    printf("%d minutos", tempo);
    printf("\n");




return 0;
}
