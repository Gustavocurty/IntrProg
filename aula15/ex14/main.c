/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[20];
    char carac;
    int contC = 0;
    printf("Digite uma frase: ");
    fgets(str, 20, stdin);
    printf("Digigte um caracter que queria trocar pelo espaco: ");
    scanf("%c", &carac);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == carac){
            str[i] = ' ';
            contC++;
        }
    }
    printf("\nA frase modificada eh: ");
    puts(str);
    printf("E foram feitas %d modificacoes.", contC);

    return 0;
}
