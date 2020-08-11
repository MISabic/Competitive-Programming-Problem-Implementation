#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[5000];

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    while(cin>>n>>k){
        queue< pair<int,int> >q;
        ll mx=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
            q.push({arr[i],0});
        }
        if(k>=n){
            cout<<mx<<endl;
        }
        else{
            int a=q.front().first,b=q.front().second;
            q.pop();
            while(b!=k){
                if(a>q.front().first){
                    ++b;
                    q.push(q.front());
                    q.pop();
                }
                else{
                    q.push({a,b});
                    a=q.front().first,b=q.front().second+1;
                    q.pop();
                }
            }
            cout<<a<<endl;
        }
    }
    return 0;
}
