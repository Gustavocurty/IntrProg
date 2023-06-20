/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void descontar(float sal, float perc){
    float novoSalario, acresc;
    acresc = sal*(perc/100);
    novoSalario = sal + acresc;
    
    printf("O valor do novo salario eh: %.2f , e o acresciomo foi de %.2f. ", novoSalario, acresc);
}

int main()
{
    float salario, porcentagem;
    printf("Digite o valor do salario e a porcentagem:\n");
    scanf("%f %f", &salario, &porcentagem);
    
    descontar(salario, porcentagem);

    return 0;
}
