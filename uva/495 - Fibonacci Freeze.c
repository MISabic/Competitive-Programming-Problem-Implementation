/*#include<stdio.h>
#include<string.h>

int main()
{
    long long unsigned int i,n,x,nrr[100];
    char arr[1045],a[1045],b[1045];
    nrr[0]=0;
    nrr[1]=1;
    for(i=2; i<=92; i++)
        nrr[i]=nrr[i-1]+nrr[i-2];

    //arr[1]=nrr[i-2]+'0';
    for(i=93; i<=5000; i++)
    {
        strlen()
    }

    while(scanf("%lld",&n)==1)
        printf("The Fibonacci number for %lld is %lld\n",n,nrr[n]);
    return 0;
}*/


#include <stdio.h>

/* Helper function that multiplies 2 matricies F and M of size 2*2, and
  puts the multiplication result back to F[][] */
void multiply(long long int F[2][2], long long int M[2][2]);

/* Helper function that calculates F[][] raise to the power n and puts the
  result in F[][]
  Note that this function is desinged only for fib() and won't work as general
  power function */
void power(long long int F[2][2], long long int n);

long long int fib(long long int n)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
      return 0;
  power(F, n-1);

  return F[0][0];
}

void multiply(long long int F[2][2], long long int M[2][2])
{
  long long int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void power(long long int F[2][2], long long int n)
{
  long long int i;
  long long int M[2][2] = {{1,1},{1,0}};

  // n - 1 times multiply the matrix to {{1,0},{0,1}}
  for (i = 2; i <= n; i++)
      multiply(F, M);
}

/* Driver program to test above function */
int main()
{
  long long int n = 92;
  printf("%lld", fib(n));
  getchar();
  return 0;
}
