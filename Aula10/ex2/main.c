/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int aprovados(int quant){
    int cont = 0, aprovados = 0;
    int nota, faltas;
    while(cont < quant){
        printf("Digite a nota e as faltas do aluno %d: ", cont + 1);
        scanf("%d %d", &nota, &faltas);
        if(nota > 7 && faltas <= 5){
            aprovados++;
        }
        cont++;
    }
    return aprovados;
}

int main()
{
    int quantidade;
    printf("quantos alunos tem na sua sala? ");
    scanf("%d", &quantidade);
    printf("Os alunos aprovados foram: %d", aprovados(quantidade));
    return 0;
}
