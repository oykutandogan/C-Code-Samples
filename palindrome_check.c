#include <stdio.h>

int main()
{
   int n, t = 0, temp;

   printf("sayı :\n");
   scanf("%d",&n);

   temp = n;

   while( temp != 0 )
   {
      t = t * 10;
      t = t + temp%10;
      temp = temp/10;
   }

   if ( n == t )
      printf("%d palindrom\n", n);
   else
      printf("%d palindrom değil\n", n);

   return 0;
}