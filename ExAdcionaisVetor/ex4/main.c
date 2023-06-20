/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void uniao(int A[], int B[], int C[], int tam){
    int j = 0;
    for(int i = 0; i < 2*tam; i++){
        if(i < tam){
            C[i] = A[i];
        }else{
            C[i] = B[j];
            j++;
        }
        
    }
    
    for(int i = 0; i < 2*tam;i++){
        printf("vUniao[%d] = %d \n", i, C[i]);
    }
}

void inter(int A[], int B[], int C[], int tam){
    int indice = 0;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(A[j] == B[i]){
                C[indice] = A[j];
                indice++;

            }
        }    
    }
    
    if(indice == 0){
        printf("Nao possui valores iguais!");
    }
    
    for(int i = 0; i < indice; i++){
        printf("vInter[%d] = %d \n", i, C[i]);
    }
}
    
int main()
{
    int tam = 10;
    int v1[tam], v2[tam], vUniao[2*tam], vInter[tam];
    printf("digite 10 valores para v1:");
    for(int i = 0; i < tam; i++){
        scanf ("%d", &v1[i]);
    }
    
    printf("digite 10 valores para v2:");
    for(int i = 0; i < tam; i++){
        scanf ("%d", &v2[i]);
    }

    uniao(v1, v2, vUniao, tam);
    inter(v1, v2, vInter, tam);

    return 0;
}


