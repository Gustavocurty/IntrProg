/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float calculaPesoIdeal(char sexo, float altura){
    if(sexo == 'M'){
        return 72.7*altura - 58;
    }else if(sexo == 'F'){
        return 62.1*altura - 44.7;
    }
}

int main()
{
    char sex;
    float alt, peso;
    printf("Digite seu sexo, em maiusculo, sua altura e seu peso:\n");
    scanf("%c %f %f", &sex, &alt, &peso);

    if(peso == calculaPesoIdeal(sex, alt)){
        printf("Você está no peso ideal!");
    }else{
        printf("Você NÃO está no peso ideal!");
    }
    
    return 0;
}

