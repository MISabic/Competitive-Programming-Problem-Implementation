#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n){
        map<long long,long long>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ++mp[arr[i]];
        }
        map<long long,long long>::iterator it=mp.begin();
        vector<long long>vec[10000];
        for(it; it!=mp.end(); it++){
            vec[it->second].push_back(it->first);
        }
       for(int i=0; i<9999; i++){
            if(vec[i].size()==1){
                cout<<vec[i][0]<<endl;
                break;
            }
        }
    }
    return 0;
}


