/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void medidas(float metros){
    printf("O valor em metros eh: %.2f\n", metros);
    printf("Em decimetros eh: %.e\n", metros*10);
    printf("Em centimetros eh: %.2e\n", metros*100);
    printf("Em milímetros eh: %.2e\n", metros*1000);
    return;
}

int main()
{
    float metros;
    printf("Digite um valor em metros:\n");
    scanf("%f", &metros);

    medidas(metros);
    return 0;
}
