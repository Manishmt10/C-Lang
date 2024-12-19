/* Switch.c */

#include <stdio.h>

int main() {
   int x;
   
   printf("Select\n 1 for Apples\n 2 for Oranges\n 3 for Bananas\n");
   scanf("%d", &x);

   switch(x){
      case 1 : /* Apples */
      printf("Apples\n");
      break;
      case 2 : /* Oranges */
      printf("Oranges\n");
      break;
      case 3 : /* Bananas */
      printf("Bananas\n");
      break;
      default :
      printf("Select from the given option");
   }
   return 0;
}
