/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void aprovacao( float nota){
    if(nota >= 70){
        printf("APROVADO!");
        
    }else{
        printf("REPROVADO!");
    }
}

int main()
{
    float nota;
    printf("Digite sua nota:\n");
    scanf("%f", &nota);
    
    aprovacao(nota);

    return 0;
}
