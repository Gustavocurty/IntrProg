/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void imprime (float vet1[], float vet2[], float vet3[], int tam)
{
    printf("-----------p(1)--p(2)--p(3)\n");
  for (int i = 0; i < tam; i++){
      printf (" Aluno(%d): %.2f  %.2f  %.2f\n", i + 1, vet1[i], vet2[i], vet3[i]);

    }
}

void
notaFinal (float vet1[], float vet2[], float vet3[], int tam)
{
  float nf;
  for (int i = 0; i < tam; i++)
    {
      nf = ((vet1[i] + vet2[i] + (2 * vet3[i])) / 4);
      printf ("A nota final do aluno %d eh: %.2f\n", i + 1, nf);
    }
}

void
abaixoMedia (float vet1[], float vet2[], float vet3[], int tam)
{
  float nf;
  for (int i = 0; i < tam; i++)
    {
      nf = ((vet1[i] + vet2[i] + (2 * vet3[i])) / 4);
      if (nf < 7)
	{
	  printf ("O indice da nota < 7 eh: %d\n", i + 1);
	}
    }
}

void
acimaMedia (float vet1[], float vet2[], float vet3[], int tam)
{
  float nf;
  for (int i = 0; i < tam; i++)
    {
      nf = ((vet1[i] + vet2[i] + (2 * vet3[i])) / 4);
      if (nf >= 7)
	{
	  printf ("A nota >= 7 eh: %.2f\n", nf);
	}
    }
}

int
main ()
{
  int tam = 3, num;
  float p1[tam], p2[tam], p3[tam];
  printf ("Preencha o vetor com as notas da p1, p2 e p3 de 3 alunos: ");
  for (int i = 0; i < tam; i++)
    {
      scanf ("%f %f %f", &p1[i], &p2[i], &p3[i]);
    }

  printf ("Escolha uma opcao:\n");
  printf(" 1- Imprimir os vetores; \n 2- Imprimir as notas finais; \n 3- Retornar o indice das notas < 7;\n 4- Retornar as notas >= 7;\n 0- Para sair!");
    
    do{
        scanf ("%d", &num);
        switch (num)
        {
            case 1:
                imprime (p1, p2, p3, tam);
                break;
            case 2:
                notaFinal (p1, p2, p3, tam);
                break;
            case 3:
                abaixoMedia (p1, p2, p3, tam);
                break;
            case 4:
                acimaMedia (p1, p2, p3, tam);
                break;
        }
    }while(num != 0);


  return 0;
}

