#include<stdio.h>

int digcount(int n,int base)
{
    int k=0;
    while(n!=0){
        k+=n%base;
        n=n/base;
    }
    return k;
}

int main()
{
    int i,n,k;
    for(i=2992; i<=9999; i++)
        if(digcount(i,10)==digcount(i,12) && digcount(i,12)==digcount(i,16))
            printf("%d\n",i);
    return 0;
}
