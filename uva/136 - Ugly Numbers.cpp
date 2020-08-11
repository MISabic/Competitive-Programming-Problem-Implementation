/*#include<stdio.h>

int main()
{
    int i=15,j=0,n,k=1,dig,num[1501],x=0;
    num[k++]=1;
    scanf("%d",&dig);
    for(n=2; n*n<=859963392; n++)
    {
        i=n;
        while(i!=1)
        {
            if(!(i % 2))
                i=i/2;
            else if(!(i % 3))
                i=i/3;
            else if(!(i % 5))
                i=i/5;
            else
                break;
        }
        if(i==1)
            ++x;
        //if(x+1==1500)
    }
    printf("%d",n);
    //printf("%d\n",x);
    //printf("%d\n",num[dig]);
}*/


/*
#include<stdio.h>
#define min(a,b)  (a<b? a:b)

long ugly[1502],x,y,z;
void UglyGen()
{
    int a,b,c,n;
    ugly[1]=a=b=c=n=1;
    while(n!=10)
    {
        printf("%ld %ld %ld\n",x,y,z);
        printf("%ld %ld %ld\n",a,b,c);
        x=2*ugly[a];
        y=3*ugly[b];
        z=5*ugly[c];
        ugly[++n]=min(x,min(y,z));
        if(ugly[n]==x)
            a++;
        if(ugly[n]==y)
            b++;
        if(ugly[n]==z)
            c++;
    }
}
int main()
{
    UglyGen();
    printf("The 1500'th ugly number is %ld.\n",ugly[3]);
    return 0;
}
*/


/*
# include<stdio.h>
# include<stdlib.h>
# define bool int

// Function to find minimum of 3 numbers
unsigned min(unsigned , unsigned , unsigned );

// Function to get the nth ugly number
unsigned getNthUglyNo(unsigned n)
{
    unsigned *ugly =
             (unsigned *)(malloc (sizeof(unsigned)*n));
    unsigned i2 = 0, i3 = 0, i5 = 0;
    unsigned i;
    unsigned next_multiple_of_2 = 2;
    unsigned next_multiple_of_3 = 3;
    unsigned next_multiple_of_5 = 5;
    unsigned next_ugly_no = 1;
    *(ugly+0) = 1;

    for(i=1; i<n; i++)
    {
       next_ugly_no = min(next_multiple_of_2,
                           next_multiple_of_3,
                           next_multiple_of_5);
       *(ugly+i) = next_ugly_no;
       printf("%d %d %d %d\n",next_multiple_of_2,next_multiple_of_3,next_multiple_of_5,next_ugly_no);
       if(next_ugly_no == next_multiple_of_2)
       {
           i2 = i2+1;
           next_multiple_of_2 = *(ugly+i2)*2;
           printf("n %d\n",*(ugly+i2));
       }
       if(next_ugly_no == next_multiple_of_3)
       {
           i3 = i3+1;
           next_multiple_of_3 = *(ugly+i3)*3;
           printf("x %d\n",*(ugly+i3));
       }
       if(next_ugly_no == next_multiple_of_5)
       {
           i5 = i5+1;
           next_multiple_of_5 = *(ugly+i5)*5;
           printf("s %d\n",*(ugly+i5));
       }
    }
    //End of for loop (i=1; i<n; i++)
    return next_ugly_no;
}

// Function to find minimum of 3 numbers
unsigned min(unsigned a, unsigned b, unsigned c)
{
    if(a <= b)
    {
      if(a <= c)
        return a;
      else
        return c;
    }
    if(b <= c)
      return b;
    else
      return c;
}

// Driver program to test above functions
int main()
{
    unsigned no = getNthUglyNo(15);
    printf("%dth ugly no. is %d ", 150, no);
    getchar();
    return 0;
}
*/



#include<stdio.h>
#define min(a,b) (a<b ? a:b)

int main()
{
    long long int ugly[1500],x,y,z,a,b,c,count;
    ugly[1]=a=b=c=count=1;
    while(count!=1500)
    {
        x=2*ugly[a];
        y=3*ugly[b];
        z=5*ugly[c];
        ugly[++count]=min(x,min(y,z));
        if(ugly[count]==x)
            a++;
        if(ugly[count]==y)
            b++;
        if(ugly[count]==z)
            c++;
    }
    printf("The 1500'th ugly number is %lld.\n",ugly[1500]);
}




/*
#include<iostream>
#define X(b,a) b*ugly[a]
#define x X(2,a)
#define y X(3,b)
#define min(a,b) (a<b ? a:b)
#define B ugly[++count]=min(x,min(y,z))
#define A ugly[count]==x
#define N ugly[count]==y
#define S ugly[count]==z

using namespace std;

int main()
{
    long long int ugly[1500],z,a,b,c,count;
    ugly[1]=a=b=c=count=1;
    while(count!=1500)
    {
        z=X(5,c);
        B;
        if(A)
            a++;
        if(N)
            b++;
        if(S)
            c++;
    }
    cout<<"The 1500'th ugly number is "<<ugly[1500]<<"."<<endl;
    return 0;
}*/







