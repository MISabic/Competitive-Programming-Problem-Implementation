#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0; i<n; i++){
            arr[i]*=(-1);
            long long res=0;
            for(int j=0; j<n; j++){
                res+=arr[j];
            }
            if(res==0){
                cout<<i+1<<endl;
                flag=1;
                break;
            }
            arr[i]*=(-1);
        }
        if(flag==0) cout<<-1<<endl;
    }
    return 0;
}



