/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float confere(float alt, float peso){
    return peso / (alt*alt);
}

int main()
{
    float peso, altura;
    printf("INDICE DE MASSA CORPORAL\n");
    printf("Digite o peso em kg:");
    scanf("%f", &peso);
    
    printf("Digite a altura em m:");
    scanf("%f", &altura);
    
    
    printf("Valor do IMC: %f", confere(altura, peso));

    return 0;
}
