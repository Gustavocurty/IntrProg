/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float inflacao(float salario, float salarioMin){
    if(salario <= (salarioMin / 2)){
        return 0;
    }else if(salario > (salarioMin*0.5) && salario <= (salarioMin + salarioMin*0.5)){
        return salario*0.2;
    }else if(salario > (salarioMin + salarioMin*0.5) && salario <= salarioMin*2){
        return salario*0.35;
    }else{
        return salario*0.3;
    }
}
int main()
{
    float sal, salMin;
    printf("Digite o valor do seu salario e do salario minimo: ");
    scanf("%f %f", &sal, &salMin);
    
    printf("O valor de desconto do INSS eh: %.2f", inflacao(sal, salMin));
    

    return 0;
}
