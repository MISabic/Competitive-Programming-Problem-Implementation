#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[1000100],res[10][1000100];

int main()
{
    int t,n,m,k;
    for(int i=1; i<=1000010; i++){
        if(i<10)
            arr[i]=i;
        else{
            int kj=i,mul=1;
            while(kj){
                if(kj%10)
                    mul*=(kj%10);
                kj/=10;
            }
            arr[i]=arr[mul];
        }
    }
    for(int i=1; i<=1000010; i++){
        for(int j=1; j<=9; j++){
            if(arr[i]==j)
                res[j][i]=(res[j][i-1]+1);
            else res[j][i]=res[j][i-1];
        }
    }
    while(cin>>t){
        for(int i=0; i<t; i++){
            cin>>n>>m>>k;
            ll tot=res[k][m]-res[k][n-1];
            cout<<tot<<endl;
        }
    }
    return 0;
}
