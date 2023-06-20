/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n;
    float menor = 0, maior, cont;
    printf("Digite 10 valores:");
    
    do{
        scanf("%f", &n);
        if(cont == 0){
            maior = n;
            menor = n;
        }
        if(n < menor){
            menor = n;
        }else if(n > maior){
            maior = n;
        }
        cont++;
    }while(cont != 10);

    printf("O menor valor digitado eh: %.2f e o maior eh: %.2f", menor, maior);
    return 0;
}



