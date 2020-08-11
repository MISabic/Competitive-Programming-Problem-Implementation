#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,k,n;
    string str;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>k;
        long long cnt=0;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=1; j<=k; j++){
            cin>>str;
            if(str=="donate"){
                cin>>n;
                cnt+=n;
            }
            else cout<<cnt<<endl;
        }
    }
    return 0;
}
