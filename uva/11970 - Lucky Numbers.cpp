#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k=0;
    cin>>t;
    while(t--){
        cin>>n;
        printf("Case %lld:",++k);
        for(int i=sqrt(n)-1; i>=1; i--)
            if(n/i==n/double(i))
                printf(" %lld",n-i*i);
        cout<<"\n";
    }
    return 0;
}
