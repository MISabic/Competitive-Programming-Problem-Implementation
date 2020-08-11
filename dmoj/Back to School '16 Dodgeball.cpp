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
    ll c;
    vector<ll>vec;
    while(cin>>c){
        ll n=1,sum=0;
        string str,arr="";
        for(int i=0; i<c; i++){
            cin>>str;
            if(str[0]==arr[0]){
                ++n;
            }
            else if(str[0]!=arr[0]){
                n=1;
            }
            vec.push_back(n);
            arr=str;
        }
        for(int i=0; i<vec.size(); i++)
            sum+=vec[i];
        cout<<sum%1000000007<<endl;
        vec.clear();
    }
    return 0;
}



