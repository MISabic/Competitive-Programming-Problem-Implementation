#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long c,f;
    map<int,unsigned long long>mp;
    mp[0]=1;
    for(int i=1; i<=20; i++){
        mp[i]=i*mp[i-1];
    }

    scanf("%llu",&c);
    for(int i=1; i<=c; i++){
        scanf("%llu",&f);
        string res,str;
        map<int,unsigned long long>::reverse_iterator it;
        for(it=mp.rbegin(); it!=mp.rend(); it++){
            if(it->second <= f){
                stringstream ss;
                ss<<it->first;
                ss>>str;
                res=str+"!+"+res;
                f-=(it->second);
            }
        }
        if(f) cout<<"Case "<<i<<": impossible"<<endl;
        else cout<<"Case "<<i<<": "<<res.substr(0,res.length()-1)<<endl;
    }
    return 0;
}
