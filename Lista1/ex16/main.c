/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo;
    printf("Digite o codigo:\n");
    scanf("%d", &codigo);
    
    switch(codigo){
        case 101:
            printf("Vendedor!");
            break;
        case 102:
            printf("Atendente!");
            break;
        case 103:
            printf("Auxiliar tecnico!");
            break;
        case 104:
            printf("Coordenador!");
            break;
        case 105:
            printf("Coordenador de Grupo!");
            break;
        case 106:
            printf("Gerente!");
            break;
        default:
            printf("Codigo invalido!");
    }

    return 0;
}
