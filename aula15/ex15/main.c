/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int funcao(char str[]){
    int cont = 0, qntd = 0, contTrue = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        cont++;
    }
    qntd = cont;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == str[qntd-2]){
            contTrue++;
        }
        qntd--;
    }
    if(contTrue-1 == cont-2){
        return 1;
    }else{
        return 0;
    }
    
    
}

int main()
{
    char str[100];
    int cont = 0, qntd = 0, contTrue = 0;
    printf("Digite uma frase: ");
    fgets(str, 100, stdin);
    
    if(funcao(str)){
        printf("Eh palindrono!");
    }else{
        printf("Nao eh palindrono!");
    }

    return 0;
}

