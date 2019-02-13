#include <stdio.h>


int main()
{
    int a, i;
   scanf("%x", &a);
   for (i=1;i<16;i++) {
   printf("%x*%x=%x\n", a, i, a*i);

   }
    return 0;
}
