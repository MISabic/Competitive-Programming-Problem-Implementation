#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[50];
    while(scanf("%d %d",&n,&k)==2){
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int p=k%n,e=100;
        if(arr[p]==0) --e;
        else e-=3;
        while(p!=0){
            p=(p+k)%n;
            if(arr[p]==0) --e;
            else e-=3;
        }
        cout<<e<<endl;
    }
    return 0;
}
