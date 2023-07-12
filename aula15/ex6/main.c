/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int funcao (char str[]){
    int n, cont = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            cont++;
        }
    }
    return cont;
}

int main()
{
    char str[30];
    printf("Digite seu nome: ");
    fgets(str, 30,stdin);


    printf("Existem %d espacos em branco na frase: ", funcao(str));
    puts(str);
    return 0;
}
