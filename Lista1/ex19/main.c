/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float saldoInicial, salario, saldoParcial, retirada;
    
    printf("EXTRATO BANCARIO\n");
    printf("Saldo inical: R$");
    scanf("%f", &saldoInicial);
    printf("Salario: R$");
    scanf("%f", &salario);
    
    saldoParcial = saldoInicial + salario;
    printf("saldo parcial: R$ %.2f\n", saldoParcial);
    for(int i = 1; i < 4; i++){
        printf("%da retirada: R$", i);
        scanf("%f", &retirada);
        saldoParcial = saldoParcial - retirada;
        printf("saldo parcial: R$ %.2f\n", saldoParcial);
        
    }
    
    printf("Saldo final: R$%.2f", saldoParcial);
    

    return 0;
}
