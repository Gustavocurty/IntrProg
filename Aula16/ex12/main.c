/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30];
    int matricula;
    float nota[3];
}Aluno;

int main()
{
    int qntd = 3;
    Aluno alunos[qntd];
    
    for(int i = 0; i < qntd; i++){
        printf("Digite o nome do aluno: ");
        fgets(alunos[i].nome, 30, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")]='\0';
        
        printf("\nSua matricula: ");
        scanf("%d",&alunos[i].matricula);
        
        printf("E suas 3 notas: ");
        scanf("%f %f %f", &alunos[i].nota[0], &alunos[i].nota[1], &alunos[i].nota[2]);
        getchar();
    }
    
    float maior = alunos[0].nota[0];
    int indice = 0;
    float soma[qntd];
    
    for(int i = 0; i < qntd; i++){
        if(alunos[i].nota[0] > maior){
            maior = alunos[i].nota[0];
            indice = i;
        }
        soma[i] = 0;
    }
    
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < qntd; i++){
            soma[i] += alunos[i].nota[j];
        }
    }
    
    float maiorMed = soma[0]/3;
    float menorMed = soma[0]/3;
    int indiceMedMaior = 0;
    int indiceMedMenor = 0;
    
    for(int i = 0; i < qntd; i++){
        if(soma[i]/3 > maiorMed){
            maiorMed = soma[i]/3;
            indiceMedMaior = i;
        }else if(soma[i]/3 < menorMed){
            menorMed = soma[i]/3;
            indiceMedMenor = i;
        }  
    }
    
    printf("\nO aluno %s possui a maior nota na primeira prova, sendo %.2f",alunos[indice].nome, alunos[indice].nota[0]);
    printf("\nO aluno %s possui a maior media nas provas, sendo %.2f",alunos[indiceMedMaior].nome, maiorMed);
    printf("\nO aluno %s possui a menor media nas provas, sendo %.2f",alunos[indiceMedMenor].nome, menorMed);

    for(int i = 0; i < qntd; i++){
        if(soma[i]/3 > 6){
            printf("\nO alunos %s com matricula %d esta APROVADO com %.2f de media!", alunos[i].nome, alunos[i].matricula, soma[i]/3);
        }else{
            printf("\nO alunos %s com matricula %d esta REPROVADO com %.2f de media!", alunos[i].nome, alunos[i].matricula, soma[i]/3);
            
        }
    }

    return 0;
}
