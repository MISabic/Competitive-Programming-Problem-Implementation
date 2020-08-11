#include<stdio.h>
#include<string.h>
#define MOD 9999959999LL

long long arr[2005][2005];

long long con(long long u,long long v)
{
    if(u==0 && v==0)
        return 0;
    if(arr[u][v] != -1) return arr[u][v];
    long long curRes = 0;
    if(u>0){
        curRes += (con(u-1,v+1)+1);
        if(curRes>=MOD) curRes = curRes - MOD;
    }
    if(v>0){
        curRes += (con(u,v-1)+1);
        if(curRes>=MOD) curRes = curRes - MOD;
    }
    return arr[u][v] = curRes;
}

int main()
{
    long long u,v;
    memset(arr,-1,sizeof(arr));
    while(scanf("%lld %lld",&u,&v)==2){
        if(u==0 && v==0) break;
        long long res = con(u,v) + 1;
        if(res>=MOD) res = res - MOD;
            printf("%lld\n",res);
    }
    return 0;
}
