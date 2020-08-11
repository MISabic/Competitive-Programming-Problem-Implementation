#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        int k=0;
        cin>>n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n && j!=i; j++){
                if((i^j)<=n)
                    ++k;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
