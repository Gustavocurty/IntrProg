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
    int k;
    printf("Digite uma frase:");
    fgets(str, 30, stdin);
    
    printf("Digite uma constante:");
    scanf("%d", &k);
    
    printf("\nA frase modificada com a encriptacao de Julio Cesar eh ");
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]+k);
    }
    
    return 0;
}


