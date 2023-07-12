/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    char str[30];
    printf("Digite seu nome: ");
    fgets(str, 30,stdin);
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Ocaractere da posicao %d eh: %c",n, str[n-1]);

    
    return 0;
}
