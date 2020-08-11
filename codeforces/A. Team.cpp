#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    while(cin>>n){
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>a>>b>>c;
            if(a+b+c>=2) ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
