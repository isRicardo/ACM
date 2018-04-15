#include <stdio.h>

int main ()
{
     for ( int i = 1; i <= 9; i++) 
     {   
         if (i % 3 == 1)
         {
             printf(" A = %d, B = %d", i  ,  i  + 2);
             printf(" A = %d, B = %d", i  ,  i  + 3);
         }       
         if (i % 3 == 2)
         {
             printf(" A = %d, B = %d", i  + 1 ,  i  + 2);
             printf(" A = %d, B = %d", i   + 1 ,  i );
         }       
         if (i % 3 == 0)
         {
             printf(" A = %d, B = %d", i  + 1 ,  i );
             printf(" A = %d, B = %d", i  + 1 ,  i  - 1 );
         }       
     }
     while (true)
     {

     }
     return 0;
}
