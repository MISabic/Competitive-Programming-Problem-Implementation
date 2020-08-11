#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p,q,r,s,t,u,v,c,a[1010],b[1010];
    while(cin>>n>>m){
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
        }
        int res=0;
        for(int i=0; i<=m-n; i++){
            int flag=0;
            for(int j=0; j<n; j++){
                if(b[i+j]+a[j]!=1){
                    flag=1;
                    break;
                }
            }
            if(flag==0) ++res;
        }
        cout<<res<<endl;
    }
    return 0;
}
