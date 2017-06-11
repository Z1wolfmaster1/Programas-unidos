#include <stdio.h>
#include <math.h>

int main() {
	int x, i, r, teste;
	
	inicio:
		scanf("%d", &x);
			
		switch(x) {
			case -1:
				break;
				
			case 1:
				printf("0\n");
				goto inicio;
				break;
	default:
		r = sqrt(x) + 1; 

  if (x % 2 == 0) 
          teste = 1; 
  else{ 
      for (i = 3 ; i < r; i+=2) 
        if (x % i == 0) 
          teste = 1; 
  } 
  if (!teste) 
          printf ("1\n"); 
  else 
          printf ("0\n");

			goto inicio;
		    break;
}
		
	return 0;
}
