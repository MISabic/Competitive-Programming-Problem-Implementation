#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    char arr[555][555];
    while(cin>>n>>m){
        int mnup=1000,mxdn=0,mxrt=0,mnlt=1000,flag=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='X'){
                    mnup=min(mnup,i);
                    mxdn=max(mxdn,i);
                    mnlt=min(mnlt,j);
                    mxrt=max(mxrt,j);
                }
            }
        }
        //cout<<mnup<<"    "<<mxdn<<endl;
        for(int i=mnup; i<=mxdn; i++){
            for(int j=mnlt; j<=mxrt; j++){
                if(arr[i][j]=='.'){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
