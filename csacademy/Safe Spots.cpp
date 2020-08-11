#include<bits/stdc++.h>
using namespace std;

int t,n,m,p,q,r,s,u,v,k,arr[100100],calc[100100],calcag[100100];

int main()
{
    while(cin>>n>>k){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        calc[n]=0;
        int till=max(n-k,0),res=0;
        for(int i=n-1; i>=till; i--){
            calc[i]=calc[i+1]+arr[i];
        }
        for(int i=till-1; i>=0; i--){
            calc[i]+=(calc[i+1]+arr[i]-res);
            res=arr[i+k];
        }

        calcag[0]=arr[0],res=0;
        for(int i=1; i<k; i++){
            calcag[i]=calcag[i-1]+arr[i];
        }
        for(int i=k; i<n; i++){
            calcag[i]+=(calcag[i-1]+arr[i]-res);
            res=arr[i-k];
        }

        long long sum=0,cnt=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0 && (calc[i]+calcag[i])<=1){
                ++cnt;
            }
        }
        cout<<cnt<<endl;
        memset(calc,0,sizeof(calc));
        memset(calcag,0,sizeof(calcag));
    }
    return 0;
}

