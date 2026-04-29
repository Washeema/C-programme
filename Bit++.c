#include<stdio.h>
int main()
{
   int x=0, n, i;
   char s,t,u;

   scanf("%d", &n);

   for(i=0; i<n; i++)
   {
      scanf(" %c%c%c",&s,&t, &u);
      
      if( s=='+' || t=='+')
         x++;
      else
         x--;
   }
   printf("%d", x);
   return 0;
}
