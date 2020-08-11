#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int arr[2*n+5][2*n+5];
        memset(arr,0,sizeof(arr));
        int x=0;
        n=2*n+1;
        for(int i=0; i<n; i++){
            for(int j=0, k=x; j<n; j++){
                arr[i][j]=(++k);
                if(arr[i][j]>n) arr[i][j]%=n;
                if(i==j) arr[i][j]=0;
            }
            ++x;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
