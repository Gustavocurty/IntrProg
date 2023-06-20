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
    float vet1[tam], vet2[tam], vet3[tam];
    
    printf("Digite 5 valores pro primeiro vetor:");
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet1[i]);
    }
    
    printf("Digite 5 valores pro segundo vetor:");
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet2[i]);
    }
    
    printf("O novo vetor possui os valores :\n");
    for(int i = 0; i < tam; i++){
        vet3[i] = vet1[i] + vet2[i];
        printf("vet3[%d] = %.2f\n", i + 1 ,vet3[i]);
    }

    return 0;
}
