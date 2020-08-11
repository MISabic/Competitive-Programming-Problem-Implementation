#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,arr[105][105];
    cin>>t;
    while(t--){
        cin>>m>>n;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        int cnt=0,zeros=0;
        for(int i=0; i<n; i++){
            zeros=0;
            for(int j=m-1; j>=0; j--){  //cout<<j<<"   "<<i<<endl;
                if(arr[j][i]==0){
                    ++zeros;
                }
                else{
                    cnt+=zeros;
                    //zeros=min(0,zeros-1);
                }

            }
            //cout<<":counter :: "<<cnt<<endl;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
