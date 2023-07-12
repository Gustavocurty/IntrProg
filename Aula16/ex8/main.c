/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct{
    char nome[100];
    int idade;
} pessoa;

int main()
{
    pessoa p[3];
    for(int i = 0; i < 3; i++){
        printf("Digite o nome da pessoa %d", i+1);
        fgets(p[i].nome, 100,stdin);
        printf("\nDigite a idade da pessoa %d", i+1);
        scanf("%d", &p[i].idade);
        getchar();
    }
    for(int i = 0; i < 3; i++){
        printf("O nome da pessao %d eh %s", i+1, p[i].nome);
        printf("e a idade eh %d", p[i].idade);
    }
    return 0;
}
