'''
Nesse problema, você deve ler um valor inteiro e calcular o menor número possível de notas nas quais o valor pode ser decomposto.
As notas possíveis são 100, 50, 20, 10, 5, 2 e 1. Imprima o valor lido e a lista de notas.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N <1000000).

Resultado
Imprima o número lido e a quantidade mínima de cada nota necessária em língua portuguesa, como o exemplo fornecido. 
Não esqueça de imprimir o final da linha após cada linha, caso contrário, você receberá o "Erro de apresentação" .
'''

#include <stdio.h>

int main(){
    int N;
    int n100, n50, n20, n10, n5, n2, n1;


    scanf("%d", &N);


    if (N>0 && N<1000000){
        printf("%d\n", N);

        n100 = N/100;
        N = N-n100 *100;

        n50 = N/50;
        N = N-n50 * 50;

        n20 = N/20;
        N = N-n20 * 20;

        n10 = N/10;
        N = N-n10 * 10;

        n5 = N/5;
        N = N-n5 * 5;

        n2 = N/2;
        N = N-n2 * 2;

        n1 = N;


        printf("%d nota(s) de R$ 100,00\n", n100);
        printf("%d nota(s) de R$ 50,00\n", n50);
        printf("%d nota(s) de R$ 20,00\n", n20);
        printf("%d nota(s) de R$ 10,00\n", n10);
        printf("%d nota(s) de R$ 5,00\n", n5);
        printf("%d nota(s) de R$ 2,00\n", n2);
        printf("%d nota(s) de R$ 1,00", n1);
        printf("\n");

    }


return 0;
}
