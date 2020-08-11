#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        if(a==b) cout<<"infinity"<<endl;
        else if(a<b) cout<<0<<endl;
        else{
            map<int,int>mp;
            int n=a-b,sqrtn=sqrt(n),i=1;
            while(i<=sqrtn)
            {
                if(n%i==0) {
                    if(i>b) mp[i]=1;
                    if (i!=(n/i)) {
                        if(n/i>b) mp[n/i]=1;
                    }
                }
                i++;
            }
            cout<<mp.size()<<endl;
        }
    }
    return 0;
}
