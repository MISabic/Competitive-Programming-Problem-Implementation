#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll n,r,a,b,c,d;
    vector<ll>vec1;
    vector<ll>vec2;
    vector<ll>vec3;
    while(cin>>r){
        for(int i=1; i<=1000; i++){
            for(int j=i; j<=1000; j++){
                for(int l=j; l<(i+j); l++){
                    double k=.5*(i+j+l);
                    double val=(sqrt(k*(k-i)*(k-j)*(k-l)))/k;
                    if(val==(double)r){
                        vec1.pb(i),vec2.pb(j),vec3.pb(l);
                    }
                }
            }
        }
        cout<<vec1.size()<<endl;
        for(int i=0; i<vec1.size(); i++)
            cout<<vec1[i]<<" "<<vec2[i]<<" "<<vec3[i]<<endl;
        vec1.clear(),vec2.clear(),vec3.clear();
    }
    return 0;
}
