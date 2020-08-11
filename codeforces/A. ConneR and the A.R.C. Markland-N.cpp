#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,s,k,p;
    while(cin>>t){
        while(t--){
            cin>>n>>s>>k;
            map<int,int>arr;
            for(int i=0; i<k; i++){
                cin>>p;
                arr[p]=1;
            }
            int a=s,b=s;
            while(arr[a]==1) --a;
            while(arr[b]==1) ++b;

            if(a<1) cout<<abs(b-s)<<endl;
            else if(b>n) cout<<abs(a-s)<<endl;
            else cout<<min(abs(a-s),abs(b-s))<<endl;
        }
    }
}
