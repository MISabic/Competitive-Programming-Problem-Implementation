#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    long long n,k,id,arr[101010];
    while(scanf("%I64d %I64d",&n,&k)==2){
        memset(arr,sizeof(arr),0);
        long long count=0,fin=0;
        for(int i=1; i<=n; i++){
            scanf("%I64d",&arr[i]);
            count+=arr[i];
        }
        for(int i=1; i<=k; i++){
            scanf("%I64d",&id);
            fin+=(count-arr[id])*arr[id];
            count-=arr[id];
            arr[id]=0;
        }//cout<<"  "<<fin<<endl;
        for(int i=2; i<=n; i++){
            if(arr[i-1]!=0 && arr[i]!=0){
                fin+=arr[i-1]*arr[i];
            }
        }
        if(arr[n]!=0 && arr[1]!=0)
            fin+=arr[n]*arr[1];
        cout<<fin<<endl;
    }
    return 0;
}

