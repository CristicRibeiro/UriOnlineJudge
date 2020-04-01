'''
Faça um programa que leia três valores de ponto flutuante: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem a base A e a altura C.
b) a área do círculo C do raio (pi = 3.14159)
c) a área do trapézio que possui A e B por base e C por altura.
d) a área do quadrado que possui o lado B.
e) a área do retângulo que possui os lados A e B.

Entrada
O arquivo de entrada contém três valores duplos com um dígito após o ponto decimal.

Resultado
O arquivo de saída deve conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, 
sempre com uma mensagem correspondente (em português) e um espaço entre os dois pontos e o valor. O valor calculado deve 
ser apresentado com 3 dígitos após o ponto decimal.
'''

#include <stdio.h>
#define pi 3.14159

int main(){
    float A, B, C;
    float TrianguloRetangulo, Circulo, Trapezio, Quadrado, Retangulo;

    scanf("%f %f %f", &A, &B, &C);

    TrianguloRetangulo = ((A*C)/2.00);
    Circulo = (C*C*pi);
    Trapezio = (((A+B)/2.00) * C);
    Quadrado = B*B;
    Retangulo =  A*B;

    printf("TRIANGULO: %.3f\n", TrianguloRetangulo);
    printf("CIRCULO: %.3f\n", Circulo);
    printf("TRAPEZIO: %.3f\n", Trapezio);
    printf("QUADRADO: %.3f\n", Quadrado);
    printf("RETANGULO: %.3f\n", Retangulo);


return 0;
}
