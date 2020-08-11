#include<stdio.h>

int main()
{
    long long int a,i;
    while(scanf("%I64d",&a)==1)
    {
        for(i=1; (a!=0 || a/(i+1)!=0); i++)
        {
            a=a-i;
            if(a==0)
            {
                printf("%I64d\n",i);
                break;
            }
            else if(a/(i+1)==0)
            {
                printf("%I64d\n",a);
                break;
            }
        }
    }
    return 0;
}
