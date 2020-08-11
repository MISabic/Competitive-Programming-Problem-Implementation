#include<bits/stdc++.h>
using namespace std;

int arr[1000100];

int main()
{
    long long n,x,a,b,c;
    while(cin>>n){
        memset(arr,0,sizeof(arr));
        long long res=0;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            int p1=(b/2),p2=(a/2);
            for(int j=0; j<p1; j++){
                if(arr[j]<p2)
                    arr[j]=p2;
            }
        }
        for(int j=0; j<=1000010; j++){
            res+=arr[j];
        }
        res=res*4;
        cout<<res<<endl;
    }
    return 0;
}

