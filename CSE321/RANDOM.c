#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   time_t t;
   double c;

   n = 5;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) {
        c=(double)(rand() % 100) / 100;
      printf("%lf\n", c);
   }

  return(0);
}
