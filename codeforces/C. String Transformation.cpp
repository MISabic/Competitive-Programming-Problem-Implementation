#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[5555];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    while(cin>>str){
        ll sz=str.length(),cnt=0,ch=97;
        string res="";
        for(int i=0; i<sz; i++){    //cout<<ch<<"  "<<(char)ch<<endl;
            if(ch-str[i]>=0 && ch!=123){   //cout<<ch-str[i]<<" hello "<<endl;
                res+=(char)ch;
                ++ch;
            }
            else res+=str[i];
        }
        if(ch!=123) cout<<-1<<endl;
        else cout<<res<<endl;
    }
    return 0;
}
