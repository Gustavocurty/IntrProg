/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void confere(float num){
    if(num > 0){
        printf("O numero eh Positivo!");
    }else if(num < 0){
        printf("O numero eh Negativo!");
    }else {
        printf("O numero eh Neutro!");
    }
}

int main()
{
    float numero;
    printf("Digite Um numero real:\n");
    scanf("%f", &numero);
    
    confere(numero);

    return 0;
}
