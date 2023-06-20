/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void valorVenda(float valor){
    if (valor < 20.0){
        printf("O valor a ser vendido sera: R$%.2f", valor + valor*0.45);
    }
    else{
        printf("O valor a ser vendido sera: R$%.2f", valor + valor*0.30);
    }
}

int main()
{
    float preco;
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &preco);
    
    valorVenda(preco);

    return 0;
}
