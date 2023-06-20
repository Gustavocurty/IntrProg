/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void pagamentos(){
    printf("Formas de pagamento:\n");
    printf("1- Á vista.\n");
    printf("2- Cheque para trinta dias.\n");
    printf("3- Em duas vezes.\n");
    printf("4- Em três vezes.\n");
    printf("5- Em quatro vezes.\n");
    printf("6- A partir de cinco vezes.\n");
    printf("Entre com sua opção:\n");
}
int main()
{
    int codigo;
    pagamentos();
    scanf("%d", &codigo);
    switch(codigo){
        case 1:
        printf("Pagamento á vista selecionado! Desconto de 20%%.");
        break;
        case 2:
        printf("Pagamento em cheque selecionado! Mesmo preço a vista.");
        break;
        case 3:
        printf("Pagamento em duas vezes selecionado! Mesmo preço a vista.");
        break;
        case 4:
        printf("Pagamento em três vezes selecionado! Mesmo preço a vista.");
        break;
        case 5:
        printf("Pagamento em quatro vezes selecionado! Juros de 3%% ao mês.");
        break;
        case 6:
        printf("Pagamento á partir de cinco selecionado! Juros de 5%% ao mês.");
        break;
        default:
        printf("Opção inválida.");
    }

    return 0;
}
