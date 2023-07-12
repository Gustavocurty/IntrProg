/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct{
    int hora;
    int min;
    int seg;
} Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    Data d1;
    Horario h1;
    char nome[20];
} Compromisso;

int main()
{
    Compromisso comp;
    printf("Qual seu compromisso: ");
    fgets(comp.nome, 20, stdin);
    
    comp.nome[strcspn(comp.nome, "\n")] = '\0';
    
    printf("Digite o dia, mes e ano: ");
    scanf("%d %d %d", &comp.d1.dia, &comp.d1.mes, &comp.d1.ano);
    
    printf("Digite a hora, menutos e segundos separados por espaco: ");
    scanf("%d %d %d", &comp.h1.hora, &comp.h1.min, &comp.h1.seg);
    
    printf("Seu compromisso %s eh %d/%d/%d ", comp.nome, comp.d1.dia, comp.d1.mes, comp.d1.ano);
    printf("As %d hora(s), %d minuto(s) e %d segundo(s).", comp.h1.hora, comp.h1.min, comp.h1.seg);

    return 0;
}


