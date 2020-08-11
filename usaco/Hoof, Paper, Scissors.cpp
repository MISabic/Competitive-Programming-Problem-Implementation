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
#define Pr(c)            copy(Pr.begin(),Pr.end(),ostream_iterator <int> (cout, " "));
#define bpop(x)         __builtin_popcount(x)
#define len(x)          x.length()
#define bug1(v1)        printf("%lld\n",v1);
#define bug2(v1,v2)     printf("%lld %lld\n",v1,v2);
#define bug3(v1,v2,v3)  printf("%lld %lld %lld\n",v1,v2,v3);
#define spf(sen)        sprintf (sen,"%d plus %d is %d", a, b, a+b);//buffer; contain the resulting string,returns total no. of characters [set format]
#define ssf(sen)        sscanf (sen,"%s %*s %d",str,&i);// read from sen, [set format]
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

int stringSort(const void *a,const void *b)
{
    return (strcmp((char *)a, (char *)b));
}

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

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

map<int,string>mp;
P pi[1000];

int match(int n)
{
    int res=0;
    for(int i=0; i<n; i++){
        if(mp[pi[i].fi]=="r" && mp[pi[i].si]=="s") ++res;
        else if(mp[pi[i].fi]=="s" && mp[pi[i].si]=="p") ++res;
        else if(mp[pi[i].fi]=="p" && mp[pi[i].si]=="r") ++res;
    }
    return res;
}

int main()
{
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    ll t,n,a,b,p,q,r,s,m,k,d,x,y;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>pi[i].fi>>pi[i].si;
        }
        string str="123";
        int mx=-1;
        do{
            mp[str[0]-'0']="r",mp[str[1]-'0']="p",mp[str[2]-'0']="s";
            mx=max(mx,match(n));
        }
        while(next_permutation(str.begin(),str.end()));
        cout<<mx<<endl;
    }
    return 0;
}

