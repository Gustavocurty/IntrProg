/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int x, pot;
    printf("Digite um inteiro positivo:");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        pot = pow(2,i);
        printf("2^%d = %.d\n", i, pot);
    }
    return 0;
}
