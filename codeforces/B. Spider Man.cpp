#include<bits/stdc++.h>
using namespace std;

long long i,n,k,arr[100100],brr[100100];

int main()
{
    //freopen("out.txt","r",stdin);
    while(scanf("%I64d",&n)==1){
        long long tot=0,tra=0;
        for(i=0; i<n; i++){
            scanf("%I64d",&arr[i]);
            arr[i]=arr[i]-1;
            tot+=arr[i];
            brr[i]=tot;
        }
        for(i=0; i<n; i++){
            if(brr[i]%2==0) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
