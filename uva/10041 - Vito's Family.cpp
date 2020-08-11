#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,s[505];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>s[i];
        sort(s,s+n);
        int k=s[(n-1)/2];
        int sum=0;
        for(int i=0; i<n; i++)
            sum+=abs(k-s[i]);
        cout<<sum<<endl;
    }
    return 0;
}
