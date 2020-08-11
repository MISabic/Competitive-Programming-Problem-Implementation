#include<bits/stdc++.h>
using namespace std;

long long kgcd(long long a, long long b)
{
    while (a > 0 && b > 0)
    {
        a -= b;
        swap(a , b);
    }
    return a + b;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++)
                if(kgcd(i,j)==__gcd(i,j))
                    c++;
                    //cout<<i<<"    "<<j<<"     "<<kgcd(i,j)<<"    "<<__gcd(i,j)<<endl;
        }
        cout<<c<<endl;
    }
    return 0;
}
