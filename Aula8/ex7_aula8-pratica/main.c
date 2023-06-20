/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void impressao(int n){
    int cont = 0;
    if(n > 0){
        while(cont < n){
            cont++;
            printf("%d ", cont);
        }
    }else{
        while(cont > n){
            printf("%d ", n);
            n++;
        }
    }
    printf("\n");
}

void impressaoTriangulo(int n){
    int cont = 0;
    int tri = 1;
    while(cont < n){
        cont++;
        tri = 1;
        while(tri <= cont){
            printf("%d ", tri);
            tri++;
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    
    impressao(num);
    impressaoTriangulo(num);

    return 0;
}

