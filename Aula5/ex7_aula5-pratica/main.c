/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void calcula(int n1, int n2){
    printf("OPERAÇÕES SOBRE INTEIRO\n");
    printf("%d + %d = %d\n", n1, n2, n1+n2);
    printf("%d - %d = %d\n", n1, n2, n1-n2);
    printf("%d * %d = %d\n", n1, n2, n1*n2);
    printf("%d / %d = %d\n", n1, n2, n1/n2);
    printf("%d %% %d = %d\n", n1, n2, n1%n2);
    return;
}

int main()
{
    int num1, num2;
    printf("Digite dois valores:\n");
    scanf("%d %d", &num1, &num2);
    calcula(num1,  num2);

    return 0;
}
