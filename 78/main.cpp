#include <stdio.h>

int main()
{
    int a;
   scanf("%d", &a);
   int i=0, c=0;
   while(i<=a) {
     i+=2;
     c+=i;
   }
   c-=i;
   printf("%d", c);
    return 0;
}
