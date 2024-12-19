/* for.c */

#include <stdio.h>
#include <assert.h>
#define F fflush(stdout);

void multi(int t, int x){
   int result = t*x;
   printf("%d x %d = %d\n",t, x, result);

   return;
}

int main() {
   
   int table, x;
   
   printf("Select a multiplication table : "); F;
   scanf("%d", &table);

   assert(table<21 && table>0); // it will abort the program if the user gives any other value
   for (x=1;x<=10;x++)  multi(table,x);

   return 0;
}
