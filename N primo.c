#include <stdio.h> 


int main (void) 
{ 
  int i, nb, contar, teste; 
  teste = contar = 0; 
  printf ("Entre um n�mero inteiro:"); 
  if (scanf ("%d", &nb) != 1) 
    return -1; 

  if (nb % 2 == 0) 
          teste = 1; 
  else{ 
      for (i = 3 ; i < nb; i+=2, contar++) 
        if (nb % i == 0) 
          teste = 1; 
  } 
  if (!teste) 
          printf ("%d n�mero primo, n�mero itera��es = %d\n", 
                          nb, contar); 
  else 
          printf ("%d n�o � um n�mero primo, n�mero itera��es = %d\n",nb, contar); 
  return 0; 
} 
