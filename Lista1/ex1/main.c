/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float somatorio(float n1, float n2){
    return n1 + n2;
}

int main()
{
    float num1, num2;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);
    
    printf("A soma de %.2f + %.2f = %.2f", num1, num2, somatorio(num1, num2));

    return 0;
}
