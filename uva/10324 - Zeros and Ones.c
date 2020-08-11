#include<stdio.h>
#include<string.h>

int main()
{
    char word[1000000];
    long long int n,i,j,count=0,temp;
    int flag=0;
    while(scanf("%s",word)!=EOF)
    {
        scanf("%lld",&n);
        printf("Case %lld:\n",++count);
        while(n!=0)
        {
            scanf("%lld %lld",&i,&j);
            if(j<i)
            {
                temp=i;
                i=j;
                j=temp;
            }
            for(i; i<j; i++)
            {
                if(word[i]!=word[i+1])
                {
                    printf("No\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("Yes\n");
            --n;
            flag=0;
        }
    }
    return 0;
}
