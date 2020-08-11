#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<int> vec;
    string str;
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        int k1=min(a,min(c,d));
        int res1=256*k1+32*min(a-k1,b);
        int k2=min(a,b);
        int res2=32*k2+256*min(a-k2,min(c,d));
        cout<<max(res1,res2)<<endl;
   }
    return 0;
}

