/*
#include <stdio.h>

int fibonacci (int n);

int main()
{       int n;
        scanf("%d",&n);
        fibonacci(n);
}

int fibonacci (int n)
{
    int i,arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for(i = 2; i < n; i++)
        arr[i] = arr[i-1] + arr[i-2];

    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
*/

/*
#include <stdio.h>

int fibonacci (int n);

int main()
{       int n;
        scanf("%d",&n);
        fibonacci(n);
}

int fibonacci (int n)
{
    int i,arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for(i = 2; i < n; i++)
        arr[i] = arr[i-1] + arr[i-2];

    //for (i = 0; i < n; i++)
        printf("%d\n", arr[n-1]);
}*/

/**This another O(n) which relies on the fact that if we
*  n times multiply the matrix M = {{1,1},{1,0}} to itself
* (in other words calculate power(M, n )), then we get the
* (n+1)th Fibonacci number as the element at row and column
* (0, 0) in the resultant matrix.
*
* The matrix representation gives the following closed expression for the Fibonacci numbers:
*   1   1  =  F(n+1)    F(n)
*   1   0  =  F(n)      F(n-1)
*/

#include <stdio.h>

/* Helper function that multiplies 2 matricies F and M of size 2*2, and
  puts the multiplication result back to F[][] */
void multiply(int F[2][2], int M[2][2]);

/* Helper function that calculates F[][] raise to the power n and puts the
  result in F[][]
  Note that this function is desinged only for fib() and won't work as general
  power function */
void power(int F[2][2], int n);

int fib(int n)
{
  int F[2][2] = {{1,1},{1,0}};
  //int F[2][2] = {{8,1},{1,7}}
  if (n == 0)
      return 0;
  power(F, n-1);

  return F[0][0];
}

void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void power(int F[2][2], int n)
{
  int i;
  int M[2][2] = {{1,1},{1,0}};

  // n - 1 times multiply the matrix to {{1,0},{0,1}}
  for (i = 2; i <= n; i++)
      multiply(F, M);
}

/* Driver program to test above function */
int main()
{
  int n = 65;
  printf("%d", fib(n));
  getchar();
  return 0;
}




#include <stdio.h>

void multiply(int F[2][2], int M[2][2]);

void power(int F[2][2], int n);

/* function that returns nth Fibonacci number */
int fib(int n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

/* Optimized version of power() in method 4 */
void power(int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

/* Driver program to test above function */
int main()
{
  int n = 9;
  printf("%d", fib(9));
  getchar();
  return 0;
}
