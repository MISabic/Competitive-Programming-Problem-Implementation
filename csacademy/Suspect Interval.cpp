#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100],check[100100];
    double x,y;
    string str;
    while(cin>>n){
        set<long long>st;
        for(int i=0; i<n; i++){
            cin>>k;
            st.insert(k);
        }
        int n=0;
        set<long long>::iterator it=st.begin();
        for(it; it!=st.end(); it++){
            arr[n++]=(*it);
        }
        /*for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
        }*/
        long long mx=0;
        if(n==1){
            cout<<100000<<endl;
            continue;
        }
        else{
            mx=arr[1]-1;
        }
        for(int i=1; i<n-2; i++){
            mx=max(mx,(arr[i+1]-1)-(arr[i-1]+1)+1);
        }
        mx=max(mx,100000-(arr[n-2]+1)+1);
        cout<<mx<<endl;
    }
    return 0;
}



