#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int k1=0,k2=0,till;
        double keep=0;
        if(n%2==0) till=n/2;
        else till=(n/2)+1;
        for(int i=till-1; i>=1; i--)
        {
            if(__gcd(i,n-i)==1)
            {
                k1=i,k2=n-i;
                break;
            }
        }
        cout<<k1<<" "<<k2<<endl;
    }
    return 0;
}


