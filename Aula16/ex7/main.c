/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define n 6
typedef struct{
    float peso;
    float altura;
} medida;

int main()
{
    float somaP = 0;
    float somaA = 0;
    medida p[n];
    for(int i = 0; i < n; i++){
        printf("Digite o peso da pessoa %d: ", i+1);
        scanf("%f", &p[i].peso);
        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &p[i].altura);
        somaP += p[i].peso;
        somaA += p[i].altura;
    }
    printf("A media da altura da galera eh %.2f e do peso eh %.2f!", somaA/n, somaP/n);

    return 0;
}
