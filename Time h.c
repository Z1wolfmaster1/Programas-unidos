#include <stdio.h>
#include <time.h>
 
int main()
{
    const time_t timer = time(NULL);
    printf("ctime is %s\n", ctime(&timer));
    return 0;
}
