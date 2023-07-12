/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[30], strV[30], strC[30], strD[30];
    int v = 0, c = 0, d = 0;
    printf("Digite uma frase: ");
    fgets(str, 30, stdin);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
               str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
               str[i] == 'O' || str[i] == 'U'){
                strV[v] = str[i];
                v++;
            }else{
                strC[c] = str[i];
                c++;
            }
        }else if(str[i] != ' ' && str[i] != '\n'){
            strD[d] = str[i];
            d++;
        }
    }
    printf("A frase so com vogais fica: ");
    puts(strV);
    printf("\nA frase so com consoantes fica: ");
    puts(strC);
    printf("\nA frase so com caracteres especiais fica: ");
    puts(strD);

    return 0;
}
