#include <stdio.h>
 
int main()
{
   int n, t, sum = 0, remainder;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   while(n!=0)
   {
   	n*=(n-1);
   	n--;
   }
   printf("Sum of digits of %d = %d\n", n, sum);
 
   return 0;
}
