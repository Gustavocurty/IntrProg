/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, cont = 0;
    char str[30];
    printf("Digite seu nome: ");
    fgets(str, 30,stdin);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            cont++;
        }
    }
    
    printf("Existem %d espacos em branco na frase: ", cont);
    puts(str);


    return 0;
}
