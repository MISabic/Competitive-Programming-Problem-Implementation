#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    ll t,n,m,k,p,q,r,s,u,v,a,b,c=0,arr[100100];
    double x,y;
    string str;
    while(cin>>str){
        int res=0,c=0;
        for(int i=0; i<str.length()-1; i++){
            if(str[i]=='V' && str[i+1]=='K'){
                ++c;
            }
        }
        res=c;
        for(int i=0; i<str.length(); i++){
            string temp=str;
            if(temp[i]=='V') temp[i]='K';
            else temp[i]='V';
            c=0;

            for(int j=0; j<temp.length()-1; j++){//cout<<temp[j]<<"   "<<temp[j+1]<<endl;
                if(temp[j]=='V' && temp[j+1]=='K'){
                    ++c;
                }
            }
            res=max(res,c);
        }
        cout<<res<<endl;
    }
    return 0;
}


