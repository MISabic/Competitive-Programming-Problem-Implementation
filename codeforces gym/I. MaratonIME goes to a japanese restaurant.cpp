#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q,a,b,arr[100010];
    while(cin>>n>>q){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long y=0,nat=0,c=0,d=0;
        for(int i=0; i<n; i++){
            if(y+arr[i]>q) break;
            y+=arr[i];
            ++c;
        }
        for(int i=n-1; i>=0; i--){
            if(nat+arr[i]>q) break;
            nat+=arr[i];
            ++d;
        }
        if(c==d) cout<<"Empate"<<endl;
        else if(c>d) cout<<"Yan"<<endl;
        else cout<<"Nathan"<<endl;
    }
    return 0;
}
