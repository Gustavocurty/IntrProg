/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void confere(float n1, float n2, int cod){
    switch(cod){
        case 1:
            printf("Os numeros sao %.2f %.2f", n1, n2);
            break;
        case 2:
            printf("Os numeros multiplicados sao %.2f", n1*n2);
            break;
        case 3:
        if (n2 == 0){
            printf("Nao pode dividir por zero!");
            break;
        }else{
            printf("Os numeros dividos sao %.2f", n1/n2);
            break;
        }
        default:
            printf("Codigo invalido!");
    }
}

int main()
{
    int codigo;
    float num1, num2;
    printf("Digite dois valores e o codigo:\n");
    scanf("%f %f %d", &num1, &num2, &codigo);
    
    confere(num1, num2, codigo);

    return 0;
}
