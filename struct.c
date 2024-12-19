/* Struct.c */

#include <stdio.h> 
#include <string.h>

struct person {
   char firstname[8];
   char lastname[32];
   int age;
};

int main () {
   struct person p1;

   printf("Enter your firstname : ");
   scanf("%s",p1.firstname);

   printf("Enter your lastname : ");
   scanf("%s",p1.lastname);

   printf("Enter your age : ");
   scanf("%d", &p1.age);

   printf("%s %s is of the age %d\n",
          p1.firstname,
          p1.lastname,
          p1.age
          );
   return 0;
}
