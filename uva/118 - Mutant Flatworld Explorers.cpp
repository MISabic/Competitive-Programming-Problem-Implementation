#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,y,k1,k2;
    char ch,kch;
    string str;
    map< pair<int,int>,int >mp;
    cin>>n>>m;
    while(cin>>x>>y>>ch){
        cin>>str;
        int f=0;
        for(int i=0; i<str.length(); i++){
            k1=x,k2=y,kch=ch;
            if(str[i]=='F'){
                if(ch=='N'){
                    if(mp[make_pair(x,y)]==1 && (x<0 || x>n || y+1<0 || y+1>m)) continue;
                    ++y;
                }
                else if(ch=='S'){
                    if(mp[make_pair(x,y)]==1 && (x<0 || x>n || y-1<0 || y-1>m)) continue;
                    --y;
                }
                else if(ch=='E'){
                    if(mp[make_pair(x,y)]==1 && (x+1<0 || x+1>n || y<0 || y>m)) continue;
                    ++x;
                }
                else if(ch=='W'){
                    if(mp[make_pair(x,y)]==1 && (x-1<0 || x-1>n || y<0 || y>m)) continue;
                    --x;
                }
            }
            else if(str[i]=='L'){
                if(ch=='N') ch='W';
                else if(ch=='S') ch='E';
                else if(ch=='E') ch='N';
                else if(ch=='W') ch='S';
            }
            else if(str[i]=='R'){
                if(ch=='N') ch='E';
                else if(ch=='S') ch='W';
                else if(ch=='E') ch='S';
                else if(ch=='W') ch='N';
            }
            if(x<0 || x>n || y<0 || y>m){
                cout<<k1<<" "<<k2<<" "<<kch<<" "<<"LOST"<<endl;
                f=1;
                mp[make_pair(k1,k2)]=1;
                break;
            }
        }
        if(f==0) cout<<x<<" "<<y<<" "<<ch<<endl;
    }
    return 0;
}
