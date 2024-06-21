#include <stdio.h>
void main() 
{
   int r, i, j, n= 1;
   printf("Enter any number: ");
   scanf("%d", &r);
   for (i = 1; i <= r; i++) 
   {
      for (j = 1; j <= i; ++j) 
	  {
         printf("%d ", n);
         ++n;
      }
      printf("\n");
   }
   getch();
}
