/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float consumo(float kilometro, float combustivel){
    return combustivel / kilometro;
}

int main()
{
    float comb, km;
    printf("Digite a quantidade de kilometro rodado e a quantidade de combustivel consumido:\n");
    scanf("%f %f",&km, &comb);
    
    printf("O combustivel gasto eh: %.2f", consumo(comb, km));
    return 0;
}
