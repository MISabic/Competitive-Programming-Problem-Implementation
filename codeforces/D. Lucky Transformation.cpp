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

/*int gcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}*/

char *strrev(char *s)
{
    char *real,*forward,temp;
    real=s;
    forward=s;
    while(*s) s++;
    while(forward<s)
    {
        temp = *(--s);
        *s = *forward;
        *forward++ = temp;
    }
    return real;
}

/*YOU CAN NOT GO BACK AND MAKE A BRAND NEW BEGINNING
    BUT YOU CAN START NOW AND MAKE A BRAND NEW ENDING*/

// NEVER CALCULATE ANYTHING INSIDE COUT

bool isValid(int i,int n)
{
    return ((i<n && i>=0) && (i+1<n && i+1>=0) && (i+2<n && i+2>=0));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t,n=778,m,p,q,r,s,u,v,l,k;
    string str,arr[100000]={"4","7","44","47","74","77","444","447","474","477","744","747","774","777"};
    ll from=13,to=8,now=14,f=0;
    while(cin>>n>>k>>str){
        string fin;
        for(int i=0; i<n; i++){//cout<<k<<endl;
            if(k==0){
                cout<<str<<endl;
                f=1;
                break;
            }
            if(isValid(i,n) && i%2==0 && str[i]=='4' && str[i+1]=='4' && str[i+2]=='7'){
                if(k%2==1){
                    str[i]='4',str[i+1]='7',str[i+2]='7';
                }
                else str[i]='4',str[i+1]='4',str[i+2]='7';
                k=0;
            }
            else if(isValid(i,n) && i%2==1 && str[i]=='4' && str[i+1]=='7' && str[i+2]=='7'){
                str[i]='7',str[i+1]='7',str[i+2]='7';
                if(i-2>=0 && str[i]=='4') i-=3;
                else if(i-1>=0 && str[i]=='4') i-=2;
                else --i;
                --k;
            }
            else if(isValid(i,n) && i%2==0 && str[i]=='4' && str[i+1]=='7' && str[i+2]=='7'){
                str[i]='4',str[i+1]='4',str[i+2]='7';
                --i;
                --k;
            }
            else if(i+1<n && i%2==0 && str[i]=='4' && str[i+1]=='7'){
                str[i]='4';
                str[i+1]='4';
                --k;
            }
            else if(i+1<n && i%2==1 && str[i]=='4' && str[i+1]=='7'){
                str[i]='7';
                str[i+1]='7';
                --k;
            }
        }
        if(f==0) cout<<str<<endl;
    }
    return 0;
}