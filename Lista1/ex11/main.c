/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void reajustado (float sal, float temp)
{
  if (temp <= 12)
    {
      printf ("Novo salario eh R$%.2f", sal + sal * 0.1);
    }
  else if (temp > 12)
    {
      printf ("Novo salario eh R$%.2f", sal + sal * 0.2);
    }
}

int main ()
{
  float salario, tempo;
  printf ("Digite o valor do seu salario atual e o tempo de servico(em meses):\n");
  scanf ("%f %f", &salario, &tempo);

  reajustado (salario, tempo);

  return 0;
}

