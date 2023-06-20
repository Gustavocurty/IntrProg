/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam = 5;
    float vetReais[4];
    int vetEscalar[4];
    printf("Preencha um vetor com 5 valores reais: ");
    for(int i = 0; i < tam; i++){
        scanf("%f", &vetReais[i]);
    }
    
    printf("Preencha um vetor com 5 valores escalares: ");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetEscalar[i]);
    }
    
    printf("A multiplicação eh:\n ");
    for(int i = 0; i < tam; i++){
        printf("%.2f\n", vetReais[i]*vetEscalar[i]);
    }

    return 0;
}
