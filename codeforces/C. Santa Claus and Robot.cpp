#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,q,m,p,r,s,k,num;
    string str;
    while(cin>>n>>str){
        int r=0,l=0,u=0,d=0,c=0,flag=0,ind;
        for(int i=0; i<n; i++){
            if(str[i]=='R'){
                if(l==1){
                    r=1;
                    l=u=d=0;
                    ++c;
                }
                else r=1;
            }
            else if(str[i]=='L'){
                if(r==1){
                    l=1;
                    r=u=d=0;
                    ++c;
                }
                else l=1;
            }
            else if(str[i]=='U'){
                if(d==1){
                    u=1;
                    d=r=l=0;
                    ++c;
                }
                else u=1;
            }
            else if(str[i]=='D'){
                if(u==1){
                    d=1;
                    u=r=l=0;
                    ++c;
                }
                else d=1;
            }
        }
        cout<<c+1<<endl;
    }
    return 0;
}
