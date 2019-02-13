#include <stdio.h>


int main()
{
   int a,m,d,n,i,k;
   scanf("%d %d %d %d", &a, &m, &d, &n);
   k=a;
   for (i=1;i<n;i++) {
    k=k*m+d;
   }
   printf("%d", k);
    return 0;
}
