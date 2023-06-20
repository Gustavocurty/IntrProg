/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void funcaoConfere(char c){
    int n1, n2;
    switch(c){
        case '-':
            printf("digite dois numeros:");
            scanf("%d %d", &n1, &n2);
            
            printf("\nA subtração de %d - %d eh: %d",n1, n2, n1-n2);
            break;
        case '+':
            printf("digite dois numeros:");
            scanf("%d %d", &n1, &n2);
            
            printf("\nA soma de %d + %d eh: %d",n1, n2, n1+n2);
            break;
        case '*':
            printf("digite dois numeros:");
            scanf("%d %d", &n1, &n2);
            
            printf("\nA multiplicação de %d x %d eh: %d",n1, n2, n1*n2);
            break;
        case '/':
                printf("digite dois numeros:");
                scanf("%d %d", &n1, &n2);
                if(n2 != 0){
                    printf("\nA divisão de %d / %d eh: %d",n1, n2, n1/n2);
                    
                }else{
                    printf("Divisão invalida!");
                }
                break;
            
        case '%':
            printf("digite dois numeros:");
            scanf("%d %d", &n1, &n2);
            
            printf("\nO resto da divisao de %d %% %d eh: %d",n1, n2, n1%n2);
            break;
        default:
            printf("\nCaractere invalido!");
            break;
    }
}

int main()
{
    char carac;
    printf("Digite um caractere: ");
    scanf("%c", &carac);

    funcaoConfere(carac);
    return 0;
}
