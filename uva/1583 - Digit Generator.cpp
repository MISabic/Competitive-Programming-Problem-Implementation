#include<stdio.h>

int main()
{
    int n,i,j,k=0,rem,quo,total=0,t,count=0;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        if(n>=1 && n<=100001)
        {
            for(i=n/2; i<n; i++)
            {
                ++count;
                j=i;
                while(j!=0)
                {
                    rem=j%10;
                    j=j/10;
                    total+=rem;
                }
                if(total+i==n)
                {
                    printf("%d\n",i);
                    break;
                }
                else
                    ++k;
                total=0;
            }
            if(count==k)
                printf("0\n");
            count=total=k=0;
        }
        else
            return 0;
        --t;
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

#define maxn 100001

int main(void)
{
    int n, t;
    int ans[maxn];
    memset(ans, 0, sizeof(ans));

    int i;
    for(i = 1; i <= maxn; ++i)
    {
        int x = i, y = i;
        while(x)
        {
            y += x % 10;
            x /= 10;
        }
        if(ans[y] == 0 || ans[y] > i) ans[y] = i;
    }

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}
*/
