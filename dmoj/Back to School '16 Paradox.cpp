#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    int c,n,i=0;
    string str;
    map<string,int>mp;
    cin>>c;
    while(c--){
        cin>>n;
        if(n!=4) cin>>str;
        if(n==1){
            if(mp[str]!=0)
                cout<<"false"<<endl;
            else{
                cout<<"true"<<endl;
                if(str=="true") mp[str] = 2;
                else mp[str] = 1;
            }
        }
        else if(n==2){
            if(mp[str]!=0){
                cout<<"true"<<endl;
                mp.erase(str);
            }
            else
                cout<<"false"<<endl;
        }
        else if(n==3){
            if(mp[str]!=0)
                cout<<mp[str]-1<<endl;
            else
                cout<<"-1"<<endl;
        }
        else{
            map<string,int>::iterator it;
            for(it=mp.begin(); it!=mp.end(); it++){
                if(it->second)
                    cout<<it->first<<" ";
            }
            cout<<endl;
        }
    }
    mp.clear();
    return 0;
}


