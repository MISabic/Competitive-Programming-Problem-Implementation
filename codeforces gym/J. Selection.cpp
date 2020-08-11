#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

ll arr[100010];

int main()
{
    //read;
    //write;
    ll l;
    while(cin>>l){
        ll sum=0,k=l/2,c=ceil(l/2.0);
        memset(arr,0,sizeof(arr));
        for(int i=1; i<=l; i+=2){
            sum+=(c-1)*k;
            c--;
            if(c==0) break;
        }
        for(int i=2; i<=l; i+=2){
            ll p=k;
            for(int j=i+2; j<=l; j+=2){
                sum+=(p-2); //cout<<p<<"    "<<sum<<"  j  "<<endl<<endl;
                --p;
                if(p==0) break;
            }
            --k;
            if(k<3) break;
        }
        cout<<sum<<endl;
    }
    return 0;
}


