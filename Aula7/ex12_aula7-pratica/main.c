/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1, num2;
    char carac;
    printf("Digite dois valores e a opração desejada:\n");
    scanf("%f %f %c", &num1, &num2, &carac);
    
    switch(carac){
        case '+':
        printf("A soma eh: %.2f", num1 + num2);
        break;
        
        case '-':
        printf("A subtração eh: %.2f", num1 - num2);
        break;
        
        case '/':
        if(num2 !=0){
            printf("A divisão eh: %.2f", num1 / num2);
            break;
        }else{
            printf("Erro! Não é possível didvir um número por zero!");
            break;
        }
        
        
        case '*':
        printf("A multiplicação eh: %.2f", num1 * num2);
        break;
        
        default:
        printf("Operador não0 reconhecido!");
    }

    return 0;
}
