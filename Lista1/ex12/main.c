/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void confere (int anoAtu, int anoNasc){
    int idade;
    idade = anoAtu - anoNasc;
    if(idade > 0 && idade <= 3){
        printf("A pessoa eh bebe!");
    }else if(idade > 3 && idade <= 10){
        printf("A pessoa eh crianca!");
    }else if(idade > 10 && idade <= 18){
        printf("A pessoa eh adolescente!");
    }else if(idade > 18 && idade <= 50){
        printf("A pessoa eh adulto!");
    }else if(idade > 51){
        printf("A pessoa eh idosa!");
    }
}
int main()
{
    int nasc, atual;
    printf("Digite o ano do seu nascimento e o ano atual:\n");
    scanf("%d %d", &nasc, &atual);
    
    confere(atual, nasc);

    return 0;
}
