#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[2000];

int main()
{
    int t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    while(cin>>n>>str){
        int o=0,sum=0,ok=0,tot=0,cnt=0,flag=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='x'){
                flag=1;
            }
            else{
                tot+=max(0,cnt-2);
                cnt=0;
                flag=0;
            }
            if(flag==1){
                ++cnt;
            }
        }
        tot+=max(0,cnt-2);
        cout<<tot<<endl;
    }
    return 0;
}
