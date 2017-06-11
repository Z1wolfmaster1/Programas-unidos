#include <stdio.h>

int main() {
	double a, l;
	int i;
	
	scanf("%lf\n%lf", &a, &l);
	
	for(i=1; i<=8; i++) {
	if((a/l)==(1/i))
	printf("A");
	}
	
	for(i=9; i<=12; i++) {
	if(a/l==(1/i))
	printf("B");
	}
	
	for(i=13; i<=18; i++) {
	if(a/l==(1/i))
	printf("C");
	}
	
	else
	printf("D");
	
	return 0;
}
