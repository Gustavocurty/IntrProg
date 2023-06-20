/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void classificaCaracter(char carac){
    if(carac == '+' || carac == '-' || carac == '*' || carac == '/' || carac == '%'){
        printf("Caracter matemático!");
        
    }else if(carac == '<' || carac == '>'){
        printf("Caracter racional!");
        
    }else if(carac == '&' || carac == '=' || carac == '"' || carac == '(' || carac == ')'  ||carac == '['|| carac == ']'){ 
        printf("Outro simbolo valido em C!");
        
    }else if(carac == '+' || carac == '-' || carac == '*' || carac == '/' || carac == '%'){
        printf("Caracter matemático!");
    }else{
            printf("Caracter não identificado!");
        }
    
}
int main()
{
    char caracter;
    printf("Digite um caracter: \n");
    scanf("%c", &caracter);

    classificaCaracter(caracter);
    
    return 0;
}
