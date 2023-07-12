/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct{
    float peso;
    float altura;
}medida;

int main()
{
    medida joao, maria;
    joao.altura = 1.78;
    maria.altura = 1.64;
    joao.peso = 75;
    maria.peso = 59;
    
    printf("A altura do Joao eh %.2f, e seu pedo %.2f\n", joao.altura, joao.peso);
    printf("A altura de maria eh %.2f, e seu pedo %.2f", maria.altura, maria.peso);
    
    return 0;
}

