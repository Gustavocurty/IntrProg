/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int minDigitados(int horas){
   return horas*60; 
}

int main()
{
    int horas;
    printf("Digite a quantidade de horas digitadas:\n");
    scanf("%d", &horas);

    printf("Foram %d minutos digitados.", minDigitados(horas));
    return 0;
}
