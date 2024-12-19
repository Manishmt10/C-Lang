/* Pointers.c */

#include <stdio.h>
#include <string.h>

int main() {
   char str[32];
   char *p;
   
   printf("Enter your name(without space) : ");
   scanf("%s", str);

   p = str;
   printf("The value stored in pointer p is %p\n", p);
   printf("It points to the first character %c\n", *p);
   printf("The address of the pointer p is %p\n", &p);

   return 0;
}

