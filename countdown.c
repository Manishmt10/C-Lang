/* Countdown.c */

#include <stdio.h>
#include <unistd.h>

void countdown(int num) {
   while(num>=0) {
      printf("%d\n", num);
      sleep(1);
      num--;
   }

   return ;
}

int main() {

   int start_time;

   printf("Enter the start time : ");
   scanf("%d", &start_time);

   countdown(start_time);

   return 0;
}
