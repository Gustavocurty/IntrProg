/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam = 9;
    float vet[tam];
    printf("Digite 10 valores:");
    for(int i = 0; i <= tam; i++){
        scanf("%f", &vet[i]);
    }
    printf("Os valores do vetor sao:\n");
    for(int i = 0; i <= tam; i++){
        printf("%.2f \n", vet[i]);
    }

    return 0;
}
