#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    char arr[20][20];
    while(cin>>r>>c){
        int cnt=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int flag1=0,flag2=0;
                for(int k=0; k<c; k++){
                    if(arr[i][k]=='S') flag1=1;
                }
                for(int k=0; k<r; k++){
                    if(arr[k][j]=='S') flag2=1;
                }
                if(flag1==0 || flag2==0) ++cnt;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
