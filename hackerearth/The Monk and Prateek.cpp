//====================================================//
//=============// IN THE NAME OF AintAH //=============//
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
#define P               pair<ll,ll>
#define fi              first
#define si              second
#define all(c)          (c).begin(),(c).end()
#define Pr(c)            copy(Pr.begin(),Pr.end(),ostream_iterator <int> (cout, " "));
#define bpop(x)         __builtin_popcount(x)
#define len(x)          x.length()
#define bug1(v1)        printf("%intd\n",v1);
#define bug2(v1,v2)     printf("%intd %intd\n",v1,v2);
#define bug3(v1,v2,v3)  printf("%intd %intd %intd\n",v1,v2,v3);
#define spf(sen)        sprintf (sen,"%d plus %d is %d", a, b, a+b);//buffer; contain the resulting string,returns total no. of characters [set format]
#define ssf(sen)        sscanf (sen,"%s %*s %d",str,&i);// read from sen, [set format]
#define eps             0.000000001
#define pi              acos(-1)
#define fequal(a,b)     fabs(a-b)<epsilon

using namespace std;
using namespace __gnu_pbds;

int inline gcd(int a,int b){return !b?abs(a):gcd(b,a%b);}
int inline lcm(int a,int b){return (a/gcd(a,b)*b);}
int bigmod(int a,int b,int m){if(!b){return 1%m;}if(b%2){return (a%m*bigmod(a,b-1,m))%m;}else {int x=bigmod(a,b/2,m)%m;return (x*x)%m;}}
int power(int a,int b){if(!b){return 1;}if(b%2){return a*power(a,b-1);}else {int x=power(a,b/2);return x*x;}}
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

ll sumofdig(ll n)
{
    ll res=0,rem;
    while(n!=0){
        res+=(n%10);//cout<<n<<endl;
        n/=10;
    }
    return res;
}

bool comp(P a,P b)
{
    if(a.si==b.si) return a.fi<b.fi;
    return a.si>b.si;
}

int main()
{
    ll t,n,i,k,j,ind,sum;
    string str;
    while(cin>>t){
        map<ll,int>mp;
        vector<P>vec;
        vector<ll>v1;
        for(int i=0; i<t; i++){
            cin>>n;
            v1.pb((n^sumofdig(n)));
            mp[(n^sumofdig(n))]++;
        }
        map<ll,int>::iterator it=mp.begin();
        ll mx=-1,num,c=0,flag=0;
        for(it; it!=mp.end(); it++){
            if((it->si)>1 && (it->si)!=0){
                c+=((it->si)-1);
            }
            if(it->si > 1) flag=1;
            vec.pb(mkp(it->fi,it->si));
        }
        if(flag==0){
            sort(all(v1),greater<ll>());
            cout<<v1[0]<<" "<<0<<endl;
        }
        else{
            sort(all(vec),comp);
            cout<<vec[0].fi<<" "<<c<<endl;
        }
    }
    return 0;
}


