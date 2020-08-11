#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("out.txt","r",stdin)
#define rep(e,lv,n) for(int e=lv; e<n; e++)
#define debug cout<<"  hello  "<<endl
#define debug1(a,b) cout<<a<<"  hello  "<<b<<endl
#define debug2(a,b,c) cout<<a<<"  hello  "<<b<<"    "<<c<<endl
using namespace std;

int main()
{
    //read;
    ll t,n,r,p,k,q,a,b,c=0;
    cin>>t;
    while(t--){
        cin>>k>>n;
        cout<<"Case "<<++c<<":"<<endl;
        if(k==0){
            int val1=n/3;
            n-=(n/3);
            int val2=n-(n/3);
            int val3=(n/3);
            cout<<val1<<'\n'<<val2<<'\n'<<val3<<endl;
        }
        else{
            n=(n*3);
            n=n+(n/2);
            int val1=(n/3);
            int k=n-(n/3);
            int val2=k-(k/3);
            cout<<val1<<'\n'<<val2<<'\n'<<n<<endl;
        }
    }
    return 0;
}








