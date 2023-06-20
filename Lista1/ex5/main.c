/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float consumo(float quilowatts){
    return quilowatts*0.46 + (quilowatts*0.46)*0.18;
}

int main()
{
    float kw;
    printf("Digite o valor da quantidade de quilowatts de uma casa:");
    scanf("%f", &kw);
    printf("O valor do consumo de energias eh: %.2f", consumo(kw));
    
    return 0;
}

