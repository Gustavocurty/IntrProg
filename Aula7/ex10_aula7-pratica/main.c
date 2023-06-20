/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void classificaNadador(int age){
    if(age >= 5 && age <= 7){
        printf("Infantil A");
    }else if(age >= 8 && age <= 10){
        printf("Infantil B");
    }else if(age >= 11 && age <= 13){
        printf("Juvenil A");
    }else if(age >= 14 && age <= 17){
        printf("Juvenil B");
    }else if(age >= 18 && age <= 30){
        printf("Adulto");
    }else if(age >= 30){
        printf("Sênior");
    }
}
int main()
{
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    classificaNadador(idade);

    return 0;
}
