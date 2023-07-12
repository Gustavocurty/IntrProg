/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void imprime(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            printf("%c", str[i])  ;  
        }
    }
}

int main()
{
    char str[30];
    printf("Digite uma frase: ");
    fgets(str, 30, stdin);
    
    imprime(str);
    return 0;
}
