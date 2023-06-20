/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int class;
    float valor;
    printf("Digite a opção que se encaixa com você:\n");
    printf("1- Cliente comum.\n");
    printf("2- Funcionário.\n");
    printf("3- Vip.\n");
    scanf("%d", &class);
    printf("Digite o valor de sua compra:\n");
    scanf("%f", &valor);

    switch(class){
        case 1:
        printf("O valor a ser pago eh: R$%.2f.", valor);
        break;
        
        case 2:
        printf("O valor a ser pago eh: R$%.2f.", valor - valor*0.05);
        break;
        
        case 3:
        printf("O valor a ser pago eh: R$%.2f.", valor - valor*0.1);
        break;
        
    
    }
    return 0;
}
