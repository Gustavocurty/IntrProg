/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void funcao(int x, int y){
    int contX = 0, contY = 0;
    if(x < y){
        while(x <= y){
            if(x % 2 == 0){
                contX++;
            }else{
                contY++;
            }
            x++;
        }
    }
    printf("A quantidade de numeros pares eh: %d\n", contX);
    printf("A quantidade de numeros impares eh: %d", contY);
    
}

int main()
{
    int x, y;
    printf("Digite dois valores X e Y:");
    scanf("%d %d", &x, &y);
    
    funcao(x, y);

    return 0;
}
