#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    ll n,l,r,q;
    cin>>n;
    while(n--){
        cin>>l>>r>>q;
        ll sum=0;
        while(l>=1){
            if(l%2==0){
                sum+=(l/2)*q;
                l=l-(l/2);
            }
            else{
                sum+=((l+1)/2)*q;
                l=l-((l+1)/2);
            }
            if(l!=0) sum+=r;
            q*=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
