#include <stdio.h>

int main(void) {
    
    float a, b, c, r;
    
    scanf("%f\n%f\n%f", &a, &b, &c);
    
    r = ((a*2)+(b*3)+(c*5))/10;
    
    printf("MEDIA = %.1f", r);
    
    return 0;
    
}
