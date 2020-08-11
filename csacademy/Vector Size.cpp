#include<bits/stdc++.h>
using namespace std;

int t,n,m,k,p,q,r,s,u,v,arr[1000100];

int main()
{
    while(cin>>n){
        stack<int>st;
        int sz=0;
        for(int i=0; i<n; i++){
            cin>>k;
            if(k==1){
                st.push(1);
                int stsz=st.size();
                sz=max(sz,stsz);
            }
            else{
                if(!st.empty()) st.pop();
            }
        }
        cout<<sz<<endl;
    }
    return 0;
}
