/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct{
    char nome[10];
    char tipoFood[15];
    float nota;
}restaurante;

int main()
{
    restaurante rest[5];
    float maior = rest[0].nota;
    int indice = 0;
    
    for(int i = 0; i < 2; i++){
        printf("\nDigite o nome do restaurante: ");
        fgets(rest[i].nome, 10, stdin);
        
        printf("\nDigite o tipo de comida: ");
        fgets(rest[i].tipoFood, 10, stdin);
        
        printf("\nDigite a nota: ");
        scanf("%f", &rest[i].nota);
        
        if(rest[i].nota > maior){
            maior = rest[i].nota;
            indice = i;
        }
        
        getchar();
    }
    
    for(int i = 0; i < 2; i++){
        printf("\nO restaurante %spossui o tipo de comida %se sua nota eh %.2f.\n", rest[i].nome, rest[i].tipoFood, rest[i].nota);

    }
    printf("O tipo de comida %sfoi o que possui maior nota, sendo %.2f!", rest[indice].tipoFood, rest[indice].nota);
    

    return 0;
}
