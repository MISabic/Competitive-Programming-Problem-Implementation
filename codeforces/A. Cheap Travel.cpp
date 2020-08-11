#include<bits/stdc++.h>
#define min(a,b) (a<b)?a:b
using namespace std;

int main()
{
    int n,k,m,p;
    while(scanf("%d %d %d %d",&n,&k,&m,&p)==4){
        int div=n/k;
        int t1=n*m, t2=(n/k)*p+(n%k)*m;
        int t3;
        (n%k!=0) ? t3=p : t3=0;
        t3+=(n/k)*p;
        int c=min(t2,t3);
        cout << (min(t1,c)) << endl;
    }
    return 0;
}
