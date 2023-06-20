/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float taxaJuros(float tempo){
    
    if(tempo >= 5){
        return 0.95;
    }else if(tempo < 5 && tempo >= 4){
        return 0.9;
    }else if(tempo < 4 && tempo >= 3){
        return 0.85;
    }else if(tempo < 3 && tempo >= 2){
        return 0.75;
    }else if(tempo < 2 && tempo >= 1){
        return 0.65;
    }else if(tempo < 1){
        return 0.55;
    }
}

int main()
{
    float tempo;
    printf("Digite o tempo de deposito:\n");
    scanf("%f", &tempo);
    
    printf("A taxa de juros eh %.2f", taxaJuros(tempo));

    return 0;
}
