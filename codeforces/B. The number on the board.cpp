#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,k,m,p,q,r,s,u,v,arr[100100];
    string str;
    while(cin>>k>>str){
        long long sum=0;
        for(int i=0; i<str.length(); i++){
            sum+=(str[i]-'0');
        }
        if(sum>=k) cout<<0<<endl;
        else{
            sort(str.begin(),str.end());
            long long gap=k-sum,cnt=0;
            for(int i=0; i<str.length(); i++){
                if(gap<=0) break;
                ++cnt;
                gap-=(9-(str[i]-'0'));
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
