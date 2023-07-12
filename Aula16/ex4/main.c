/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct{
    float altura;
    float peso;
}Medidas;

typedef struct{
    char nome[30];
    Medidas m1;
    char esp[15];
    int idade;
}Dados;

int main()
{
    Dados At1;
    printf("Digite os dados de um atleta:\n");
    printf("Digite o esporte: ");
    fgets(At1.esp, 15, stdin);

    printf("Digite o nome: ");
    fgets(At1.nome, 30, stdin);
    printf("Digite a altura: ");
    scanf("%f", &At1.m1.altura);
    printf("Digite o peso: ");
    scanf("%f", &At1.m1.peso);

    printf("Digite a idade: ");
    scanf("%d", &At1.idade);
    
    printf("O atleta escolhido foi %s, com %d anos, tendo %.2f de altura, pesando %.2f kg, gostando de %s", At1.nome,At1.idade,At1.m1.altura,At1.m1.peso, At1.esp);

    return 0;
}
