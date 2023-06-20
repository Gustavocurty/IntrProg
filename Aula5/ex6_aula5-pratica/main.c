/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void notaMinima(float p1, float p2){
    printf("Nota necessária: %.2f", (20 - (p1 + p2))/2) ;
    return;
}

int main()
{
    float p1, p2;
    printf("Digite os valores da prova 1 e da prova 2 de um aluno: \n");
    scanf("%f %f", &p1, &p2);
    
    printf("CÁLCULA DE NOTA PARA APOROVAÇÃO\n");
    printf("Nota na 1a prova: %.2f\n", p1);
    printf("Nota na 2a prova: %.2f\n", p2);
    
    notaMinima(p1, p2);

    return 0;
}
