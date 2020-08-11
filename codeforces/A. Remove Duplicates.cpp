#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[2000],check[2000];

int main()
{
    int t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>n){
        int o=0,sum=0,ok=0,tot=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            if(check[arr[i]]!=1){
                check[arr[i]]=1;
                st.push(arr[i]);
            }
        }
        cout<<st.size()<<endl;
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
        memset(check,0,sizeof(check));
    }
    return 0;
}
