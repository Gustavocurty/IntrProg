/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salBruto, extras, horas, salLiquido;
    printf("digite o valor do salario bruto:\n");
    scanf("%f", &salBruto);
    printf("digite o valor das horas extras:\n");
    scanf("%f", &extras);
    printf("digite o numero de horas extras:\n");
    scanf("%f", &horas);
    
    salLiquido = salBruto + horas*extras;
    
    printf("O salario liquido eh: %.2f", salLiquido);
    
    return 0;
}
