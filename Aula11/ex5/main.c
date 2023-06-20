/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float funcao (){
    float n;
    float e = 0.0;
    printf("Digite um numero inteiro e positivo:");
    scanf("%f", &n);
    do{
        e += (1 / n);
        n--;
    }while(n != 0);
    printf("O valor de E = %.2f", e);
}
int main()
{
    funcao();

    return 0;
}

