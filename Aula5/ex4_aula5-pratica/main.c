/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float compra(float valor_Compra, float numero_Parcelas){
    float parcela;
    return valor_Compra / numero_Parcelas;
}

int main()
{
    float valor;
    int parcelas;
    printf("Digite, respectivamente, o valor da compra e o numero de parcelas:\n");
    scanf("%f %d", &valor, &parcelas);
    
    printf("COMPRA A PRAZO");
    printf("Valor de compra: R$ %f", valor);
    printf("Numero de parcelas: %d", parcelas);
    printf("Valor da parcela a prazo: R$ %.2f", compra(valor, parcelas));
    return 0;
}
