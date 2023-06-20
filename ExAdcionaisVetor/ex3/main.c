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
    float v[tam], vet1[tam], vet2[tam], soma = 0, media;

    printf("Digite 10 valores reais: ");
    for(int i = 0; i <= tam; i++){
        scanf("%f", &v[i]);    
        soma += v[i];
    }
    
    media = soma / (tam + 1);
    for(int i = 0; i <= tam; i++){
        if(v[i] <= media){
            vet2[i] = v[i];
        }else{
            vet1[i] = v[i];
        }
    }
    printf("Valores do vet1: \n");
    for(int i = 0; i <= tam; i++){
        if(v[i] > media){
            printf("Vet1[%d] = %.2f\n", i, vet1[i]);
        }
    }
    printf("\nValores do vet2: \n");
    for(int i = 0; i <= tam; i++){
        if(v[i] <= media){
            printf("Vet2[%d] = %.2f \n", i, vet2[i]);
        }
    }
    return 0;
}
