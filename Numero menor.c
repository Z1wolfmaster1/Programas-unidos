#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d\n%d\n%d", &a, &b, &c);
	
	if((a<b) && (a<c) || (a<=b) && (a<=c))
	printf("%d\n", a);
	
	else if((b<a) && (b<c) || (b<=a) && (b<=c))
	printf("%d\n", b);
	
	else if((c<a)&&(c<b) || (c<=a) && (c<=b))
	printf("%d\n", c);
	
	return 0;
}
