#include <stdio.h>


int main()
{
    int a,i,k=0;
    scanf("%d", &a);
    for(i=1;i<100000000;i++) {
        k+=i;
        if (k>a) break;
    }
printf("%d", k);
    return 0;
}
