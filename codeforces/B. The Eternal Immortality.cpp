#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,k,n,m,a,b,p,q,r,s;
    while(cin>>a>>b){
        long long chidori=1;
        for(long long i=a+1; i<=b; i++){
            if(chidori==0) break;
            chidori=(chidori*(i%10))%10;
        }
        cout<<chidori<<endl;
    }
    return 0;
}
