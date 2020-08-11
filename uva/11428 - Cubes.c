#include<stdio.h>
#include<math.h>

int main()
{
    long int n,i,j,count=0,found=0;
    while(scanf("%ld",&n))
    {
        if(n==0)
            break;
        for(i=1; i<sqrt(n); i++)
        {
            for(j=1; j<sqrt(n); j++)
            {
                found++;
                if((i*i*i-j*j*j)==n)
                {
                    printf("%ld %ld\n",i,j);
                    break;
                }
                else
                    count++;
            }
            if((i*i*i-j*j*j)==n)
                break;
        }
        if(count==found)
            printf("No solution\n");
        count=found=0;
    }
    return 0;
}
