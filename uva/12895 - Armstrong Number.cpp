#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    int ret;
    if(p==0) return 1;
    ret=power(n,p/2);
    if(!(p&1)) return ret*ret;
    else return n*ret*ret;
}

long long sum(long long n,long long dig)
{
    long long sum=0;
    while(n!=0){
        sum+=power(n%10,dig);
        n/=10;
    }
    return sum;
}

int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        scanf("%lld",&n);
        if(sum(n,log10(n)+1)==n) cout<<"Armstrong"<<endl;
        else cout<<"Not Armstrong"<<endl;
    }
    return 0;
}
