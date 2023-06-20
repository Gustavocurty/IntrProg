/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void verifica(int vet[], int tam){
    
    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++){
            if(vet[i] == vet[j] && i != j){
                printf("O valor %d foi repetido nop indice %d %d!\n", vet[i], i, j);
                
            }
        }
    }
    
}

int main()
{
    int tam = 5;
    int vet[tam];
    printf("Preencha um vetor com 5 inteiros:");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    
    verifica(vet, tam);

    return 0;
}
