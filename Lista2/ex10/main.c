/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void imprimeImpar(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        if(vet[i] % 2 == 0){
            continue;
        }else if(i % 2 == 0){
            printf("%d ", vet[i]);
        }
    }
}

int main()
{
    int tam = 5;
    int vet[tam];
    printf("Preencha o vetor com 5 inteiros:");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    imprimeImpar(vet, tam);

    return 0;
}

