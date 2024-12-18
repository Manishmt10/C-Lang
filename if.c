/* if.c */

#include <stdio.h>

int main () {
      
   int speed;

   printf("How fast are you driving?(km/h)\n");
   scanf("%d", &speed);

   if(speed>80){
      printf("Over speed limit\n");
   } else {
      printf("Under speed limit\n");
   }

   return 0;
}
