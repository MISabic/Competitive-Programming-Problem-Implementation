#include<bits/stdc++.h>

using namespace std;

long long NumberOfPrimes(long long n)
{
    long long num=0,sqrtn=sqrt(n);
    if(n%2==0){
        while(n%2==0){
            n/=2;
            ++num;
        }
    }
    for (int i=3; i<=sqrtn; i+=2) {
        while(n%i==0) {
            n/=i;
            ++num;
        }
    }
    return num+(n!=1);
}

int main()
{
    long long n,m,k;
    while(cin>>n>>m){
        k=__gcd(n,m);
        n/=k, m/=k;
        cout<< NumberOfPrimes(n)+NumberOfPrimes(m) <<endl;
    }
    return 0;
}


