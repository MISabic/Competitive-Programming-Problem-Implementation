#include<bits/stdc++.h>
#define ll long long
using namespace std;

int u[100010],d[100010],r[100010],l[100010];

int main()
{
    int t,n,m,arr[333][333];
    while(cin>>n>>m){
        int flag=1,check[100100];
        for(int i=0; i<=100001; i++){
            u[i]=l[i]=10000000;
            d[i]=r[i]=-1;
        }
        memset(check,0,sizeof(check));
        unordered_set<int>st;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                u[arr[i][j]]=min(u[arr[i][j]],i);
                d[arr[i][j]]=max(d[arr[i][j]],i);
                l[arr[i][j]]=min(l[arr[i][j]],j);
                r[arr[i][j]]=max(r[arr[i][j]],j);
                ++check[arr[i][j]];
                st.insert(arr[i][j]);
            }
        }
        for(auto x:st){
            int calcRow=d[x]-u[x]+1;
            int calcCol=r[x]-l[x]+1;
            int calcTot=calcCol*calcCol;
            if(calcRow!=calcCol || calcTot!=check[x]){
                flag=0;
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}
