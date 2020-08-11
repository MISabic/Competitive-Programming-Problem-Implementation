//====================================================//
//=============// IN THE NAME OF ALLAH //=============//
//=======H W C B N T --- RL STUDENT OF G SENSEI=======//

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
#define P               pair<int,int>
#define fi              first
#define si              second
#define all(c)          (c).begin(),(c).end()
#define bpop(x)         __builtin_popcount(x)
#define len(x)          x.length()
#define eps             0.000000001
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

int fx1[]={+1,-1,0,0};
int fy1[]={0,0,+1,-1};
int fx2[]={+1,-1,0,0,+1,+1,-1,-1};
int fy2[]={0,0,+1,-1,+1,-1,-1,+1};
int fxh[]={+1,-1,+2,-2,+1,+2,-2,-1};
int fyh[]={-2,-2,-1,-1,+2,+1,+1,+2};

bool isValid(int n, int m, int x, int y)
{
    return (x<n && x>=0 && y<m && y>=0);
}

/*YOU CAN NOT GO BACK AND MAKE A BRAND NEW BEGINNING
    BUT YOU CAN START NOW AND MAKE A BRAND NEW ENDING*/

// NEVER CALCULATE ANYTHING INSIDE COUT

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,m,p,q,r,s,w,k,u,v,arr[1000];
    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int num=0,sum=0;
        vector<P>vec;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(arr[i]!=0) ++num,vec.pb(mkp(sum,i));
        }
        if(sum!=0) cout<<"YES"<<endl<<1<<endl<<1<<" "<<n<<endl;
        else if(num==0) cout<<"NO"<<endl;
        else{
            for(int i=0; i<vec.size(); i++){
                if(sum-vec[i].fi!=0){
                    cout<<"YES"<<endl<<2<<endl<<1<<" "<<vec[i].si+1<<endl<<vec[i].si+2<<" "<<n<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
