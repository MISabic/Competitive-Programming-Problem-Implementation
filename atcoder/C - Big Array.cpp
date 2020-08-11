#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

long long a,b,n,m,k,arr[100100];
pair<long long,long long>pi[100100],p,q;

int main()
{
    while(cin>>n>>k){
        for(long long i=0; i<n; i++){
            cin>>a>>b;
            pi[i].fi=a;
            pi[i].si=b;
        }
        sort(pi,pi+n);
        long long calc=0;
        for(long long i=0; i<n; i++){

            if((calc+pi[i].si)>k){  //cout<<calc<<"   "<<k<<endl;
                p.fi=pi[i].fi;
                p.si=calc+pi[i].si;
                break;
            }
            else{
                calc+=pi[i].si;
                q.fi=pi[i].fi;
                q.si=calc;
            }
        }
        if(k<=q.si) cout<<q.fi<<endl;
        else if(k>q.si) cout<<p.fi<<endl;
    }
}


