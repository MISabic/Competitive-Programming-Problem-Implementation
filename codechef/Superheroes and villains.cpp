#include<bits/stdc++.h>
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))
#define memc(a,c)       memset(a,'c',sizeof(a))
#define ll              long long
#define llu             long long unsigned int
#define pb              push_back
#define mkp             make_pair
#define P               pair<int,int>
#define fi              first
#define si              second
#define all(c)          (c).begin(),(c).end()
#define len(x)          x.length()
using namespace std;

int main()
{
    ll t,n,m,k,p,q,r,s,u,v,x[10110],y[10110],res[10110];
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        int s=1,v=1,flag=0;
        char ch='p';
        for(int i=0; i<n; i++){
            cin>>str;
            if(str.length()<3)
                ++v;
            else{
                string arr=str.substr(str.length()-3,str.length());
                if(arr=="man") ++s;
                else ++v;
            }
            if(s>=v+2 && ch!='l'){
                //cout<<"superheroes"<<endl;
                flag=1;
                ch='l';
            }
            else if(s+3<=v && ch!='l'){
                //cout<<"villains"<<endl;
                flag=2;
                ch='l';
            }
        }//cout<<s<<"   "<<v<<endl;
        if(flag==1) cout<<"superheroes"<<endl;
        else if(flag==2) cout<<"villains"<<endl;
        else cout<<"draw"<<endl;
    }
    return 0;
}
