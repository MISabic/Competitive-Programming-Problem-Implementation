/** problem explanation
  * he will take a "new" cigarate after smoking "k" cigarates
  * e.g. 10 3
  * 10-3 = 7 by taking 1 it becomes 8 ... till n>=k
  * finally "count+n" will give the result
  */

#include<stdio.h>

int main()
{
    long long int n,k,i,count=0;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        i=n;
        while(n>=k)
        {
            n=(n-k)+1;
            count++;
        }
        printf("%lld\n",count+i);
        count=0;
    }
    return 0;
}
