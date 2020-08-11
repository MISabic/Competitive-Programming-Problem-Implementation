#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,k;
    while(cin>>n>>x){
        int flag=0,ind=n+1;
        for(int i=0; i<n; i++){
            cin>>k;
            if(x<k && flag==0){
                ind=i+1;
                flag=1;
            }
        }
        cout<<ind<<endl;
    }
}
