#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
        cout<<max(abs(a-b)-1,abs(c-b)-1)<<endl;
    return 0;
}
