/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void horario(int segundos){
    int minutos, hora, segundo;
    minutos = (segundos / 60) %60;
    hora = ((segundos / 60)/ 60) % 24;
    segundo = segundos % 60;
    printf("Equivale a: %d horas, %d minutos, %d segundos\n", hora, minutos, segundo);
    return;
}

int main()
{
    int tempo;
    printf("Digite o valore de segundos:\n");
    scanf("%d", &tempo);
    
    printf("CONVERSÃO DE SEGUNDOS EM HORAS, MINUTOS E SEGUNDOS\n");
    printf("Tempo total em segundos %d\n", tempo);
    horario(tempo);

    return 0;
}
