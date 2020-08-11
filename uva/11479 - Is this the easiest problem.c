#include<stdio.h>

int main()
{
    long int i,j,k,m=0,n;
    scanf("%ld",&n);
    while(n!=0)
    {
        scanf("%ld %ld %ld",&i,&j,&k);
        if(i>0 && j>0 && k>0)
        {
            if(i==j && j==k && k==i)
                printf("Case %ld: Equilateral\n",++m);
            else if(i+j>k && j+k>i && k+i>j)
            {
                if(i==j && k!=i || j==k && i!=j || k==i && j!=k)
                    printf("Case %ld: Isosceles\n",++m);
                else if(i!=j && j!=k && k!=i)
                    printf("Case %ld: Scalene\n",++m);
            }
            else
                printf("Case %ld: Invalid\n",++m);
        }
        else
            printf("Case %ld: Invalid\n",++m);
        --n;
    }
    return 0;
}
