#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,q,k,p[1010];
    while(cin>>s>>q>>k){
        for(int i=0; i<q; i++){
            cin>>p[i];
        }
        double res=(double)s;
        sort(p,p+q);
        for(int i=0; i<q; i++){
            res+=max(((res*p[i])/100),(double)k);
        }
        printf("%.11f\n",res);
    }
    return 0;
}
