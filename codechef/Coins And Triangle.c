//====================================================//
//=============// IN THE NAME OF ALLAH //=============//
//=======H W C B N T --- RL STUDENT OF G SENSEI=======//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>
#include <limits.h>
#include <stdbool.h>

#define read(fl)        freopen(fl, "r", stdin)
#define write(fl)       freopen(fl, "w", stdout)
#define pf              printf
#define sf              scanf
#define mems(x,v)       memset(x,v,sizeof(x))
#define ll              long long
#define llu             long long unsigned int
#define bug1(v1)        printf("%lld\n",v1);
#define bug2(v1,v2)     printf("%lld %lld\n",v1,v2);
#define bug3(v1,v2,v3)  printf("%lld %lld %lld\n",v1,v2,v3);
#define eps             0.000000001
#define pi              acos(-1)
#define max(a,b)        (a>b)?a:b
#define min(a,b)        (a<b)?a:b
#define fequal(a,b)     fabs(a-b)<epsilon
#define lcm(a,b)        (a*b)/gcd(a,b)

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b,a%b);}

int stringSort(const void *a,const void *b){ return (strcmp((char *)a, (char *)b));}

int intSort(const int *a, const int *b){ return (*a-*b);}

ll power(ll base, ll n){ if (n==0) return 1; else return base*power(base,n-1);}

char *strrev(char *s){
    char *real,*forward,temp;
    real=s; forward=s;
    while(*s) s++;
    while(forward<s){
        temp = *(--s); *s = *forward;*forward++ = temp;
    }
    return real;
}


int main()
{
    int t,n,i;
    sf("%d",&t);
    while(t--){
        sf("%d",&n);
        for(i=1; i<1000000; i++){
            if((i*(i+1))/2>=n)
                break;
        }
        ((i*(i+1))/2==n) ? pf("%d\n",i) : pf("%d\n",i-1);
    }
    return 0;
}








