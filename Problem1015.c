'''
Leia os quatro valores correspondentes aos eixos xey de dois pontos no plano, p1 (x1, y1) e p2 (x2, y2) e calcule a distância entre eles,
mostrando quatro casas decimais após a vírgula, de acordo com a fórmula :

Distância = 

Entrada

O arquivo de entrada contém duas linhas de dados. O primeiro contém dois valores duplos:  x1 y1 e o segundo também contém dois valores 
duplos com um dígito após o ponto decimal: x2 y2 .

Resultado
Calcule e imprima o valor da distância usando a fórmula fornecida, com 4 dígitos após o ponto decimal.
'''

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);



    distancia = sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
    printf("%.4f", distancia);
    printf("\n");




return 0;
}
