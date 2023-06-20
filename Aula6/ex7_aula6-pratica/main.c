/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int saoPositivos(float n1, float n2){
    if(n1 >= 0 && n2 >= 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    float numero1, numero2;
    printf("Digite dois valores reais:\n");
    scanf("%f %f", &numero1, &numero2);
    
    if(saoPositivos(numero1, numero2)){
        printf("Ambos os valores sao positivos!");
    }else{
        printf("Ao menos um dos valores eh negativo!");
    }

    return 0;
}


