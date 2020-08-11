#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n==2 || n==1) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

bool palin(int n)
{
    int sum=0,k=n;
    while(n!=0){
        sum =((sum*10)+(n%10));
        n=n/10;
    }
    if(sum==k) return true;
    else return false;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        cout<<n*2<<endl;
        if(palin(n) && prime(n))
            break;
    }
    return 0;
}
