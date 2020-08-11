#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[200200];

int main()
{
    ll t,keep,n,m,k,q,r,s,a,b,c;
    //pair<int, int> p[200200];
    double x,y;
    string str;
    while(cin>>n){
        map<string, string>mp;
        map<string, int>mp2;
        mp["purple"]="Power";
        mp["green"]="Time";
        mp["blue"]="Space";
        mp["orange"]="Soul";
        mp["red"]="Reality";
        mp["yellow"]="Mind";
        int o=0,t=0,sum=0,ok=0,tot=0;

        vector<string>vec;
        for(int i=0; i<n; i++){
            cin>>str;
            mp2[str]=1;
        }

        map<string, string>::iterator it=mp.begin();

        for(it; it!=mp.end(); it++){
            if(mp2[it->first]==0){
                vec.push_back(it->second);
            }
        }
        cout<<vec.size()<<endl;
        for(int i=0; i<vec.size(); i++) cout<<vec[i]<<endl;
    }
    return 0;
}
