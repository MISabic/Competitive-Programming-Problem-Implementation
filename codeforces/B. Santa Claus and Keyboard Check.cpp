#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,q,m,p,r,s,k,num;
    string str,arr;
    while(cin>>str>>arr){
        map<char,char>mp,mp1;
        for(int i=0; i<str.length(); i++){
            if(mp[str[i]]!=NULL || mp[arr[i]]!=NULL) continue;
            mp[arr[i]]=str[i];
            mp[str[i]]=arr[i];
        }
        int flag=0;
        for(int i=0; i<str.length(); i++){
            arr[i]=mp[arr[i]];
        }
        for(int i=0; i<str.length(); i++){
            if(str[i]!=arr[i]){
                flag=1;
                break;
            }
        }
        map<char,char>::iterator it=mp.begin();
        for(it; it!=mp.end(); it++){
            if((mp1[it->first]==it->second || mp1[it->second]==it->first) || (it->first==it->second)) continue;
            mp1[it->first]=it->second;
        }
        if(flag==1) cout<<-1<<endl;
        else{
            map<char,char>::iterator it1=mp1.begin();
            int sz=0;
            for(it1; it1!=mp1.end(); it1++){
                if(it1->second!=NULL) ++sz;
            }
            cout<<sz<<endl;
            for(it1=mp1.begin(); it1!=mp1.end(); it1++){
                if(it1->second==NULL) continue;
                cout<<it1->first<<" "<<it1->second<<endl;
            }
        }
    }
    return 0;
}
