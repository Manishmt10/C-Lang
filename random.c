/* random.c */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int our_random_function(int max) {
   
   int x;
   x = rand() % max + 1;

   return x;
}

int main() {

   int PID, random, random2;
   
   PID = getpid();
   srand(PID);

   random = our_random_function(5);
   printf("Random 1 : %d\n", random);

   random2 = our_random_function(10);
   printf("Random 2 : %d\n", random2);

   return 0;
}
