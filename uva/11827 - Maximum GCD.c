#include<stdio.h>
#include<string.h>

long long gcd(long long a, long long b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    long long int t,brr[110],i,j,k,len,c,p,flag=0;
    char arr[10000],ch[2]=" ",*token;
    scanf("%lld",&t);
    while(t--)
    {
        j=0;
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        gets(arr);
        len=strlen(arr);
        token = strtok(arr, ch);
        while( token != NULL)
        {
            brr[j++]=atoi(token);
            token = strtok(NULL, ch);
        }
        k=j;
        c=gcd(brr[0],brr[1]);
        for(i=0; i<k; i++){
            for(j=0; j<k && brr[j]!=brr[i]; j++){
                p=gcd(brr[i],brr[j]);
                if(p>c) c=p;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
