/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void numImpar(int n){
    int cont = 1;
    
    while(cont <= n){
        printf("%d ", cont);
        cont += 2;
    }
    
}

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    numImpar(num);
    return 0;
}
