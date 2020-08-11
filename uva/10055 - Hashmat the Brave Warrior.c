#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    unsigned long int i,j;
    while (scanf("%lu %lu",&i,&j)==2)
        printf("%lu\n",labs(i-j));
    return 0;
}
/*
#include<stdio.h>
int main()
{
 unsigned long int a,b;
 while (scanf("%lu %lu",&a, &b)==2)
 {
  if (a>b)
   printf("%lu\n",a-b);
  else
   printf("%lu\n",b-a);
 }
 return 0;
}
*/
