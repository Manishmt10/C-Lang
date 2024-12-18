/* float.c */

#include <stdio.h>

int main() {
   
   float pi = 3.14, r,  answer;

   printf("What is the radius?\n");
   scanf("%f", &r);

   answer = pi*r*r;

   printf("The area is %f\n", answer);

   return 0;
}
