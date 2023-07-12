/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void imprime(){
    char str[50];
    int contV = 0, contC = 0, contD = 0;
    printf("Digite uma frase: ");
    fgets(str, 50, stdin);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
               str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
               str[i] == 'O' || str[i] == 'U'){
                contV++;
            }else{
            contC++;
            }
        }else if(str[i] != ' ' && str[i] != '\n'){
            contD++;
        }
    }
    printf("Existem %d vogais, %d consoantes e %d caracteres especiais na frase: ", contV, contC, contD);
    puts(str);
}

int main()
{
    imprime();

    return 0;
}
