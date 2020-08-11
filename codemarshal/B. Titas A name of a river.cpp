#include<cstdio>
#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;

int main()
{
    //read;
    int t,n,r,p,k,q,a,b,c=0;
    string str;
    map<string,int>mp;
    cin>>t;
    while(t--){
        cin>>k;
        for(int i=0; i<k; i++){
            cin>>str;
            mp[str]++;
        }

        map<string,int>::iterator it=mp.begin();        //cout<<(--it)->first<<endl;
        string ar;
        int mx=-1;
        for(it; it!=mp.end(); it++){
            if((it->second)>mx){
                mx=it->second;
                ar=it->first;
            }
        }
        cout<<"Case "<<++c<<": "<<ar<<endl;
        mp.clear();
    }
    return 0;
}








