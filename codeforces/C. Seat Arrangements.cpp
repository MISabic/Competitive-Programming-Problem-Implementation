#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[2020][2020];

int main()
{
    ll t,keep,n,m,p,q,r,s,a,b,c;
    string str,ip;
    double x,y;
    map<string,string>mp;
    ll res=1;
    /*vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    while(cin>>n>>m>>keep){
        ll tot=0,ok=0;
        char ch;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>ch;
                if(ch=='*') arr[i][j]=0;
                else{
                    arr[i][j]=1;
                    ++ok;
                }
            }
        }
        if(keep==1){
            cout<<ok<<endl;
            continue;
        }
        for(int i=1; i<=n; i++){
            ll row[2020];
            memset(row,0,sizeof(row));
            for(int j=1; j<=m; j++){
                if(arr[i][j]==0){
                    row[j]=0;
                }
                else{
                    row[j]=row[j-1]+arr[i][j];
                }
            }
            for(int k=1; k<=m; k++){
                //cout<<row[k]<<" ";
                if(row[k]>=keep){
                    ++tot;
                }
            }
            //cout<<endl;
        }
        //cout<<endl;
        for(int j=1; j<=m; j++){
            ll col[2020];
            memset(col,0,sizeof(col));
            for(int i=1; i<=n; i++){

                if(arr[i][j]==0){
                    col[i]=0;
                }
                else{
                    col[i]=col[i-1]+arr[i][j];//cout<<i<<"   "<<j<<"   "<<arr[i][j]<<"    "<<col[j]<<endl;
                }
            }
            for(int k=1; k<=n; k++){
                //cout<<col[k]<<" ";
                if(col[k]>=keep){
                    ++tot;
                }
            }
            //cout<<endl;
        }
        cout<<tot<<endl;
    }
    return 0;
}
