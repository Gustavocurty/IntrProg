/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
char sexo(){
    char sex = 'N';
    while(sex != 'F' && sex != 'M'){
        printf("Digite seu sexo(F ou M):\n");
        scanf(" %c", &sex);
        if(sex != 'F' && sex != 'M'){
            printf("Digite um valor válido!\n");
        }
    }
    return sex;
}

int idade(){
    int age = 131;
    while(age <= 0 || age > 130){
        printf("Digite sua idade:\n");
        scanf(" %d", &age);
        if(age <= 0 || age > 130){
            printf("Digite um valor válido!\n");
        }
    }
    return age;
}

int main()
{
    int quant;
    int cont = 0;
    printf("Quantas pessoas você quer analisar? ");
    scanf(" %d", &quant);
    
    while(cont < quant){
        if(sexo() == 'F')
            printf("Você é uma mulher de %d anos!\n", idade());
        else
            printf("Você é um homem de %d anos!\n", idade());
        cont++;
    }
    
    
    

    return 0;
}



