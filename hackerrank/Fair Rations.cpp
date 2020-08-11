#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,arr[1005];
    while(scanf("%d",&t)==1){
        for(int i=0; i<t; i++)
            cin>>arr[i];
        int c=0;
        for(i=0; i<t; i++){
            if(arr[i]%2!=0){
                arr[i+1]++;
                c+=2;
            }
        }
        if(arr[i-1]%2!=0)
            cout<<"NO"<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
