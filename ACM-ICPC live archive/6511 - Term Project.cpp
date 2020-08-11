#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,u,v,arr[100100];
    cin>>t;
    while(t--){
        int check[100100];
        memset(check,0,sizeof(check));
        cin>>n;
        int cnt=0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if(i==arr[i]) ++cnt,check[i]=-1;
        }
        for(int i=1; i<=n; i++){
            if(check[i]==0){
                int k=i,p=i,tmp=0,flag=0;
                //cout<<"here :: "<<i<<endl;
                while(1){
                    //cout<<p<<"     "<<cnt<<endl;
                    check[p]=i;
                    p=arr[p];
                    if(check[p]==i){
                        flag=1;
                        break;
                    }
                    else if(check[p]!=0){
                        break;
                    }
                }
                //cout<<"flag :: "<<flag<<endl;
                k=p;
                if(flag==1){
                    //cout<<"here :: "<<i<<endl;
                    while(1){
                        //cout<<p<<"     "<<cnt<<endl;
                        ++cnt;
                        p=arr[p];
                        if(k==p) break;
                    }
                }
            }
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}

