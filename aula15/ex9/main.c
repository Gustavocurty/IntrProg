/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    char str[40];
    printf ("Digite seu nome: ");
    fgets (str, 40, stdin);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] >= 97 && str[i+1] <= 122){
            str[i+1] = str[i+1] - 'a' + 'A';
        }
        
    }
    
    puts (str);
    return 0;
}
