#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("in.txt","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    long long n,l,r;
    char ch;
    map<char,long long>mp;
    mp['f']=1;
    mp['e']=2;
    mp['d']=3;
    mp['a']=4;
    mp['b']=5;
    mp['c']=6;
    while(scanf("%I64d%c",&n,&ch)==2){
        //cout<<n<<"   "<<ch<<endl;
        long long div=n/4,rem=n%4;
        if(rem==0){
            rem=4;
            div--;
        }
        if(div==0 || n==4){
            if(rem==1 || rem==3)
                cout<<mp[ch]<<endl;
            if(rem==2 || rem==4)
                cout<<7+mp[ch]<<endl;
            continue;
        }
        if(rem==1 || rem==3){
            cout<<div*6*2+div*4+mp[ch]<<endl;
        }
        else if(rem==2 || rem==4){
            cout<<div*6*2+div*4+6+1+mp[ch]<<endl;
        }
    }
    return 0;
}
