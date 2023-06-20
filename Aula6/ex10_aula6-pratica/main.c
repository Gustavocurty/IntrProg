/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3;
    printf("Digite 3 medidas dos lados de um triangulo:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    if(n1 == n2 && n2 == n3){
        printf("O triangulo é EQUILÀTERO!");
        
    }else if (n1 == n2 || n2 == n3 || n1 == n3){
        printf("O triangulo é ISÒSCELES!");
        
    }else if (n1 != n2 && n2 != n3 && n1 != n3){
        printf("O triangulo é ESCALENO!");
        
    }

    return 0;
}
