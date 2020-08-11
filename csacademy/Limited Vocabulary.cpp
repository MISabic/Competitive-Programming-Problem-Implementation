#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    //cout<<(int)'z'<<endl;
    while(cin>>n>>k){
        int curlen=0,strlen=0;
        string res;
        for(int i=0; i<n; i++){
            cin>>str;
            int arr[30];
            memset(arr,0,sizeof(arr));
            for(int i=0; i<str.length(); i++){
                arr[(int)str[i]-97]++;
            }
            int c=0;
            for(int i=0; i<26; i++){
                if(arr[i]!=0){
                    ++c;
                }
            }

            if(c<=k){
                if(c>=curlen){
                    if(str.length()>strlen){//cout<<str.length()<<endl;
                        strlen=str.length();
                        curlen=c;
                    }
                }
            }

        }
        if(strlen==0) cout<<-1<<endl;
        else cout<<strlen<<endl;
    }
    return 0;
}
