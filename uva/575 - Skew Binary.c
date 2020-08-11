#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char arr[1000000];
    long long int n,p,i,count=0,num;
    while(scanf("%s",arr)==1)
    {
        if(strcmp(arr,"0")==0)
            break;
        n=p=strlen(arr);
        for(i=0; i<n; i++)
        {
            num=arr[i]-'0';
            count+=num*(pow(2,p)-1);
            --p;
        }
        printf("%lld\n",count);
        count=0;
    }
    return 0;
}
