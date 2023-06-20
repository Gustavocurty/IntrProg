/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int imprimeDivisaoInteira(int n1, int n2){
    return n1 / n2;
}

float imprimeDivisaoReal(int n1, int n2){
    return (float) n1 / n2;
}

int main()
{
    int numero1, numero2;
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &numero1, &numero2);
    
    if(numero2 == 0){
        printf("Erro! Não podemos dividir por 0!");
    }else{
        printf("O valor da divisão inteira eh: %d\n", imprimeDivisaoInteira(numero1, numero2));
        printf("O valor da divisão real eh: %.2f", imprimeDivisaoReal(numero1, numero2));
    }
    

    return 0;
}

