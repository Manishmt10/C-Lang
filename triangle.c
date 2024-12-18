/* triangle.c */

#include <stdio.h>

int area_triangle(int b, int h) {
   return (b*h)/2;
}

int main() {
   
   int b, h, area;

   printf("Enter the base length : ");
   scanf("%d", &b);
   printf("Enter the height : ");
   scanf("%d", &h);

   area = area_triangle(b,h);

   printf("The area of triangle is %d\n",area);

   return 0;
}
