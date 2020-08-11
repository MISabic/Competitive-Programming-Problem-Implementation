#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,q,r,s,a,b,c;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>str){
        string k;
        int o=0,t=0,sum=0,ok=0,tot=0;
        for(int i=0; i<n-1; i++){
            //cout<<str.substr(i,2)<<endl;
            ++mp[str.substr(i,2)];
        }
        map<string,int>::iterator it=mp.begin();
        for(it; it!=mp.end(); it++){    //cout<<it->first<<"  "<<it->second<<endl;
            if((it->second) > o){
                k=it->first;
                o=it->second;
            }
        }
        cout<<k<<endl;
        /*if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }*/
    }
    return 0;
}

