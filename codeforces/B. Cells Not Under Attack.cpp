#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","r",stdin);
    long long n,m,a,b,row[100100],col[100000];
    while(cin>>n>>m){
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        long long val=n*n,k=n-1,r=0,c=0;
        for(int i=0; i<m; i++){
            cin>>a>>b;

            if(row[a]==1 || col[b]==1){
                if((row[a]==1 && col[b]==1)){
                    cout<<val<<" ";
                    continue;
                }
                if(row[a]==0)//cout<<r<<"  jj  "<<c<<endl;
                    val-=(n-c);
                if(col[b]==0)
                    val-=(n-r);
                if(row[a]==0) ++r;
                if(col[b]==0) ++c;
                row[a]=1,col[b]=1;  //cout<<"  hh  "<<k<<endl;
            }
            else{
                val-=((n-c-1)+(n-r-1)+1);
                if(row[a]==0) ++r;
                if(col[b]==0) ++c;
                row[a]=1,col[b]=1;  //cout<<"  gg  "<<k<<endl;
            }

            if(val<=0)
                cout<<0<<" ";
            else
                cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
