/* Sleep.c */

#include <stdio.h>
#include <unistd.h>

int main() {
   
   printf("Wait while finishing....");
   fflush(stdout);

   sleep(3);
   printf("ok\n");

   return 0;
}
