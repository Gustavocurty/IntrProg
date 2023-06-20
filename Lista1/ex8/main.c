/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void confere(int num){
    if(num % 2 == 0){
        printf("O numero %d eh par!", num);
    }else{
        printf("O numnero %d eh impar!", num);
    }
}
int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    
    confere(numero);

    return 0;
}
