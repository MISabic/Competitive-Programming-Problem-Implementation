#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    while(cin>>n>>k){
        int total=0;
        for(int  i=0; i<n; i++){
            cin>>x;
            total+=x;
        }
        int res=(abs(total)/k)+((abs(total)%k!=0)?1:0);
        cout<<res<<endl;
    }
    return 0;
}

