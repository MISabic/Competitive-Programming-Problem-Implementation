#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[20];
    int donation=0,n,t;
    cin>>t;
    while(t--){
        scanf("%s",arr);
        if(arr[0]=='d'){
            cin>>n;
            donation+=n;
        }
        else cout<<donation<<endl;
    }
}
