/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct {
 int codigo;
 char nome[100];
 int vendas[12];
} Produto;


int main()
{
    int qntdProd = 2;
    int qntdMes = 12;
    Produto prod[qntdProd];
    int qntdVendida[qntdMes];

    for(int i = 0; i < qntdProd; i++){
        printf("Cadastre o produto:\nNome: ");
        fgets(prod[i].nome, 100,stdin);
        prod[i].nome[strcspn(prod[i].nome, "\n")] = '\0';
        printf("Codigo: ");
        scanf("%d", &prod[i].codigo);
        qntdVendida[i] = 0;
        for(int j = 0; j < qntdMes; j++){
            printf("Quantidade vendida no mes %d: ", j+1);
            scanf("%d", &prod[i].vendas[j]);
            qntdVendida[i] += prod[i].vendas[j];
        }
        getchar();
    }
    
    int maisVendido = qntdVendida[0];
    int indice = 0;
    for(int j = 0; j < qntdMes; j++){
            if(qntdVendida[j] > maisVendido){
                maisVendido = qntdVendida[j];
                indice = j;
            }
    }
        
    printf("O produto %s de codigo %d foi o mais vendido no ano com %d vendas.", prod[indice].nome,prod[indice].codigo , maisVendido);

    return 0;
}
