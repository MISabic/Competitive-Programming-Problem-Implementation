#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int arr[500][500],visited[500][500];

int main()
{
    long long k,m,n,p,a,b,q,r,s,t,u,v;
    double x,y;
    string str;
    char ch;
    while(cin>>n>>m){
        int check=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ch;
                if(ch=='W') arr[i][j]=0;
                else{
                    arr[i][j]=1;
                    check=1;
                }
            }
        }
        if(check==0){
            cout<<1<<endl;
            continue;
        }
        int mx=0,u1=99999999,u2=0,v1=99999999,v2=0,keep=0,cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==1){
                    u1=min(u1,i);
                    u2=max(u2,i);
                    v1=min(v1,j);
                    v2=max(v2,j);
                    ++keep;
                }
            }
        }
        mx=max(u2-u1+1,v2-v1+1);
        if(mx>n || mx>m){
            cout<<-1<<endl;
        }
        else{
            cnt=((mx*mx)-keep);
            cout<<cnt<<endl;
        }
    }
    return 0;
}
