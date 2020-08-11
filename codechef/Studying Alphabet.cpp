#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,arr[30];
    cin>>str>>n;
    memset(arr,0,sizeof(arr));
    for(int i=0; i<str.length(); i++){
        arr[(int)str[i]-97]=1;
    }
    for(int i=0; i<n; i++){
        cin>>str;
        int k=0;
        for(int i=0; i<str.length(); i++){
            if(arr[(int)str[i]-97]!=1){
                k=1;
                break;
            }
        }
        if(k==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
