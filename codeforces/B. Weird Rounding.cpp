#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define read            freopen("in.txt", "r", stdin)
#define write           freopen("out.txt", "w", stdout)
#define pf              printf
#define sf              scanf
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))
#define memc(a,c)       memset(a,'c',sizeof(a))
#define ll              long long
#define llu             long long unsigned int
#define pb              push_back
#define mkp             make_pair
#define loop(i,f,t)     for(int i=f; i<t; i++)
#define loopi(i,f,t)    for(int i=f; i<=t; i++)
#define PII             pair<ll,ll>
#define PLL             pair<int,int>
#define PSI             pair<string,int>
#define PIS             pair<int,string>
#define PSS             pair<string,string>
#define fi              first
#define si              second
#define all(c)          (c).begin(),(c).end()
#define Pr(c)            copy(Pr.begin(),Pr.end(),ostream_iterator <int> (cout, " "));
#define bpop(x)         __builtin_popcount(x)
#define len(x)          x.length()
#define dbg1(v1)        cout<<v1<<endl
#define dbg2(v1,v2)     cout<<v1<<"     "<<v2<<endl
#define dbg3(v1,v2,v3)  cout<<v1<<"     "<<v2<<"     "<<v3<<endl
#define spf(sen)        sprintf (sen,"%d plus %d is %d", a, b, a+b);//buffer; contain the resulting string,returns total no. of characters [set format]
#define ssf(sen)        sscanf (sen,"%s %*s %d",str,&i);// read from sen, [set format]
#define eps             0.000000001
#define pi              acos(-1)
#define fequal(a,b)     fabs(a-b)<epsilon

using namespace std;
using namespace __gnu_pbds;

ll inline gcd(ll a,ll b){return !b?abs(a):gcd(b,a%b);}
ll inline lcm(ll a,ll b){return (a/gcd(a,b)*b);}
ll bigmod(ll a,ll b,ll m){if(!b){return 1%m;}if(b%2){return (a%m*bigmod(a,b-1,m))%m;}else {ll x=bigmod(a,b/2,m)%m;return (x*x)%m;}}
ll power(ll a,ll b){if(!b){return 1;}if(b%2){return a*power(a,b-1);}else {ll x=power(a,b/2);return x*x;}}
double c_dist(double x1,double y1,double x2,double y2){return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}
double trngl_area1(double a,double b,double c){double s=(a+b+c)/2.0;return sqrt(s*(s-a)*(s-b)*(s-c));}
double trngl_area2(double x1,double y1,double x2,double y2,double x3,double y3){return .5*(x1*(y2-y3)-x2*(y1-y3)+x3*y1-y2);}

using namespace std;

int main()
{
    long long t,n,m,p,q,r,k,arr[100100];
    string str;
    double x,y;
    while(cin>>n>>k){
        long long num=power(10LL,k);
        stringstream ss;
        ss<<n;
        ss>>str;
        long long con=0,flag=0,res,zeros=0;
        for(int i=0; i<len(str); i++){
            if(str[i]=='0'){
                ++con;
                flag=1;
            }
        }
        //cout<<con<<endl;
        if(con<k){
            if(flag==1){
                res=len(str)-1;
                cout<<res<<endl;
            }
        }
        else{
            con=0;
            for(int i=len(str)-1; i>0; i--){
                if(str[i]!='0'){
                    ++con;
                }
                if(str[i]=='0') ++zeros;
                if(zeros==k) break;
            }
            cout<<con<<endl;
        }
    }
    return 0;
}

