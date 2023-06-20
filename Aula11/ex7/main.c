/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int celsius (int far){
    return (5*(far -32)/9);
}

int main()
{
    for(int far = 50; far < 150; far++){
        printf("%dF ---> %dC\n", far, celsius(far));
    }
    return 0;
}
