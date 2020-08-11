#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[200200];
    double x,y;
    string str;
    while(cin>>m>>n>>q>>p){
        map<long long,long long>mp;
        long long c=0,d=0,f=0;
        long long a=n+c*m,b=p+d*q;
        mp[b]=1;
        while(d<200100){
            b=p+d*q;
            mp[b]=1;
            ++d;
            //cout<<a<<"  "<<b<<endl;
        }
        while(c<200100){
            a=n+c*m;
            if(mp[a]==1){
                cout<<a<<endl;
                f=1;
                break;
            }
            ++c;
        }
        if(f==0){
            cout<<-1<<endl;
        }
    }
    return 0;
}
