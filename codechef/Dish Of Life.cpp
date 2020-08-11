#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k,p,q,arr[100100];
    cin>>t;
    while(t--){
        long long cnt=0,flag=0;
        memset(arr,0,sizeof(arr));
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>p;
            for(int j=0; j<p; j++){
                cin>>q;
                if(arr[q]==0){
                    arr[q]=1;
                    ++cnt;
                }
            }
            if(cnt==k && flag==0){
                if(i+1<n) flag=1;
                else flag=2;
                //break;
            }
        }
        if(flag==0) cout<<"sad"<<endl;
        else if(flag==1) cout<<"some"<<endl;
        else cout<<"all"<<endl;
    }
    return 0;
}

