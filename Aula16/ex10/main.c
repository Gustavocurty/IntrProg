/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct {
    float x;
    float y;
    float z;
} Vetor;

Vetor soma(Vetor v[]){
    Vetor Som;
    Som.x = v[0].x + v[1].x;
    Som.y = v[0].y + v[1].y;
    Som.z = v[0].z + v[1].z;
    return Som;
}

Vetor subtracao(Vetor v[]){
    Vetor Sub;
    Sub.x = v[0].x - v[1].x;
    Sub.y = v[0].y - v[1].y;
    Sub.z = v[0].z - v[1].z;
    return Sub;
}

Vetor multiplicacao(Vetor v[]){
    Vetor Mult;
    Mult.x = v[0].y*v[1].z - v[0].z*v[1].x;
    Mult.y = v[0].z*v[1].x - v[0].x*v[1].z;
    Mult.z = v[0].x*v[1].y - v[0].y*v[1].x;
    return Mult;
}

int main()
{
    Vetor v[2];
    
    for(int i = 0; i < 2; i++){
        printf("Preencha o vetor %d ", i+1);
        scanf("%f %f %f", &v[i].x, &v[i].y, &v[i].z);
    }

    printf("\nA soma dos vetores eh (%.2f %.2f %.2f)", soma(v).x, soma(v).y, soma(v).z);
    
    printf("\nA subtracao dos vetores eh (%.2f %.2f %.2f)", subtracao(v).x, subtracao(v).y, subtracao(v).z);
    
    printf("\nA multiplicacao dos vetores eh (%.2f %.2f %.2f)", multiplicacao(v).x, multiplicacao(v).y, multiplicacao(v).z);

    return 0;
}
