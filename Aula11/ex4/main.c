/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Ze = 1.4, Chico = 1.5;
    int ano = 0;
    
    do{
        Ze += 0.03;
        Chico += 0.02;
        ano++;
    }while(Ze < Chico);
    
    printf("Zé será maior depois de %d anos!", ano);

    return 0;
}
