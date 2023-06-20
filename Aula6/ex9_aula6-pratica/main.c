/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x, y, z;
    printf("Digite 3 valores reais:");
    scanf("%f %f %f", &x, &y, &z);
    
    if(x < (y + z) && y < (x + z) && z < (x +y)){
        printf("Os 3 valores formam um triângulo!");
    }else{
        printf("Os 3 valores NÂO formam um triângulo!");
    }

    return 0;
}
