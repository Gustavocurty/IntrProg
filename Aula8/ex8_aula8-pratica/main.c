/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float auxilio(int dependentes){
    return dependentes*60;
}

int main()
{
    int cont = 1, func = 4, dependAtivos = 0;
    int depend, cont1, idade;
    while(cont <= func){
        printf("Digite quantos dependentes possui:");
        scanf("%d", &depend);
        
        cont1 = 1;
        while(cont1 <= depend){
            printf("Digite a idade do %d dependente:", cont1);
            scanf("%d", &idade);
            if(idade < 18){
                dependAtivos++;
            }
            cont1++;
        }
        cont++;
        printf("O funcionário tera R$%.2f de auxílio por mês!\n", auxilio(dependAtivos));
        printf("\n");
        
    }
    

    return 0;
}