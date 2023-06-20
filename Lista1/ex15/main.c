/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int frequencia;
    float prova1, prova2, trabalho, media;
    printf("Digite, respectivamente, as notas das duas provas, do trabalho e sua frequencia:\n");
    scanf("%f %f %f %d", &prova1, &prova2, &trabalho, &frequencia);
    
    media = (prova1*3 + prova2*5 + trabalho*2) / 10;
    
    if(frequencia > 15){
        printf("Aluno Reprovado!");
    } else  if(media >= 7){
        printf("Aluno Aprovado!");
    }else {
        printf("Tera que fazer prova final!");
    }

    return 0;
}
