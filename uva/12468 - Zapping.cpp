#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        if(a==-1 && b==-1) break;
        int k=abs(a-b);
        (k<(100-k))?cout<<k<<endl:cout<<100-k<<endl;
    }
    return 0;
}

