/* while.c*/

#include <stdio.h>

int main () {
   
   int x = 0;
   while (!x) {
      
      printf("Do you want to stop? Type 1 and Enter\n");
      scanf("%d", &x);
   }

   return 0;
}
