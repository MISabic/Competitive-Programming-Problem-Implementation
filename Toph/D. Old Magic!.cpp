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
    ll t,n,l,r,c=0,val[1000];
    string str[1000];
    cin>>t;
    ll res=0;
    for(int i=0; i<t; i++){
        cin>>str[i]>>val[i];
    }
    cin>>n;
    for(int i=t-1; i>=0; i--){
        if(str[i]=="multiply"){
            n/=val[i];
        }
        else if(str[i]=="divide"){
            n*=val[i];
        }
        else if(str[i]=="subtract"){
            n+=val[i];
        }
        else if(str[i]=="add"){
            n-=val[i];
        }
    }
    cout<<n<<endl;
    return 0;
}

