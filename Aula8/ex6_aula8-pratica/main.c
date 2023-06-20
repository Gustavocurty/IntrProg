/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void intervalo(){
    int n1, n2;
    printf("Digite dois valores:");
    scanf("%d %d", &n1, &n2);
    if(n1 < n2){
        while(n1 <= n2){
            printf("%d ", n1);
            n1++;
        }
    }else if( n1 > n2){
        while(n1 >= n2){
            printf("%d ", n1);
            n1--;
        }
    }else{
        printf("%d ", n1);
    }
}
int main()
{
    intervalo();

    return 0;
}
