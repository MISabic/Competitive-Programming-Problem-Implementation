#include<bits/stdc++.h>
using namespace std;

int main()
{
    int var[5],res[5],fin;
    map<char,int>mp;
    mp['Q']=9;
    mp['q']=9;
    mp['R']=5;
    mp['r']=5;
    mp['B']=3;
    mp['b']=3;
    mp['N']=3;
    mp['n']=3;
    mp['K']=0;
    mp['k']=0;
    mp['P']=1;
    mp['p']=1;
    char ch;
    int res1=0,res2=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>ch;
            if(ch=='Q' || ch=='R' || ch=='B' || ch=='N' || ch=='K' || ch=='P'){
                res1+=mp[ch];
            }
            else
                res2+=mp[ch];
        }
    }
    if(res1>res2) cout<<"White"<<endl;
    else if(res1<res2) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
    return 0;
}
