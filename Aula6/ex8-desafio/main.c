/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor, novoValor, perc;
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);
    
    if(valor < 2.0){
        novoValor = valor + 0.15;
    } else if(valor>= 2.0 && valor < 5.0){
        novoValor = valor + 0.15 + 0.06;
    } else if( valor > 5.0 && valor <= 20){
        novoValor = valor + 0.15 + 0.06 +1.5;
    } else if(valor > 20){
        perc = (valor - 20)*0.08;
        novoValor = valor + 0.15 + 0.06 + 1.5 + perc;
    }
    
    printf("O novo valor eh: %f", novoValor);

    return 0;
}
