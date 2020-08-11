#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    while(cin>>n){
        int mx=0,prev=0;
        for(int  i=0; i<n; i++){
            cin>>a>>b;
            mx=max(mx,b+prev-a);
            prev=b+prev-a;
        }
        cout<<mx<<endl;
    }
    return 0;
}


