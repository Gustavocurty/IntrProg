/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void confere(float sal, float financ){
    if(financ <= 5*sal){
        printf("Financiamento Concedido!");
    } else {
        printf("Financiamento Negado!");
    }
}

int main()
{
    float salario, financiamento;
    printf("Digite seu salario e o valor do financiamento:\n");
    scanf("%f %f", &salario, &financiamento);

    confere(salario, financiamento);
    return 0;
}
