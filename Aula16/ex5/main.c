/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
typedef struct{
    int x, x1;
    int y, y1;
}Ponto;

float dist (Ponto p, Ponto p1){
    float d;
    float d1 = pow(p.x - p.x1, 2);
    float d2 = pow(p1.y - p1.y1, 2);
    d = sqrt(d1-d2) ;
    return d; 
}

int main()
{
    Ponto p, p1;
    
    printf("Digite dois valores X e Y para um ponto 1: ");
    scanf("%d %d", &p.x, &p.y);
    printf("Digite dois valores X e Y para um ponto 2: ");
    scanf("%d %d", &p1.x, &p1.y);
  
    
    printf("A distancia eh: %.2f", dist(p, p1));

    return 0;
}
