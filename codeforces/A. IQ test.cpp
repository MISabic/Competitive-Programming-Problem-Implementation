#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[105],brr[105];
    while(scanf("%d",&n)==1){
        memset(brr,0,sizeof(brr));
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int k=abs(arr[i]-arr[j]);
                if(k%2!=0) brr[i]++;
            }
        }
        k=0;
        for(int i=1; i<n; i++)
            if(brr[i]>brr[k])
                k=i;
        cout<<k+1<<endl;
    }
    return 0;
}
