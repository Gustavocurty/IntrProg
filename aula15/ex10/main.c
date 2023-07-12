/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int funcao (char str[]){
    int cont = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' ){
            str[i] = 'b';
            cont++;
        }
    }

    return cont;
}

int main()
{
    char str[40];
    printf ("Digite seu nome: ");
    fgets (str, 40, stdin);
    
    printf("A frase \n%sfoi modificada %d vezes.",str, funcao(str));

    return 0;
}
