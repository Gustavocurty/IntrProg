/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int confere(int n){
    int num;
    int negativos = 0, cont = 1;
    while(cont <= n){
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
        if(num < 0){
            negativos++;
        }
        cont++;
    }
    return negativos;
}

int main()
{
    int n;
    printf("Digite a quantidade de valores desejados: ");
    scanf("%d", &n);
    
    printf("Foram digitados %d valores negativos!", confere(n));
    
    return 0;
}

