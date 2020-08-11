#include<bits/stdc++.h>
using namespace std;

long long arr[305][305];

int main()
{
    int n,m;
    while(cin>>n>>m){
        int flag=0;
        vector<long long>a(n,1),b(m,1);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                a[i]=(a[i]*arr[i][j])/__gcd(a[i],arr[i][j]);
                b[j]=(b[j]*arr[i][j])/__gcd(b[j],arr[i][j]);
                if(a[i]>1e9 || b[j]>1e9) flag=1;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(__gcd(a[i],b[j])!=arr[i][j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) cout<<-1<<endl;
        else{
            for(int i=0; i<n; i++) cout<<a[i]<<" ";
            cout<<'\n';
            for(int i=0; i<m; i++) cout<<b[i]<<" ";
            cout<<'\n';
        }
    }
    return 0;
}
