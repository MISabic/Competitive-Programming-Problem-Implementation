#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,k;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        int cnt=0,p=2;
        for(int j=0; j<n; j++){
            cin>>k;
            if(k>p){
                cnt+=(((k-p)/5)+(((k-p)%5)?1:0));
                p=k;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
    return 0;
}
