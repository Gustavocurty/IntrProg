/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[30];
    printf("Digite seu nome: ");
    fgets(str, 30,stdin);
    for(int i = 0; i < 3; i++){
        printf("%c \n", str[i]);

    }
    
    return 0;
}
