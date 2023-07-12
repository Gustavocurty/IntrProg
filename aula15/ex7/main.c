/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int cont = 0;
  char str[30];
  printf ("Digite seu nome: ");
  fgets (str, 30, stdin);

  for (int i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'
	  || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I'
	  || str[i] == 'O' || str[i] == 'U')
	{
	  cont++;
	}
    }

  printf ("Existem %d vogais na frase: ", cont);
  puts (str);
  return 0;
}
