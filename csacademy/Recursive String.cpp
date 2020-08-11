#include<bits/stdc++.h>
using namespace std;

long long n,k,arr[50];

void solve(int n)
{
    if(n<3){
        printf("%c\n",'a'+n);
        return ;
    }
    if(k<=arr[n-1]){
        solve(n-1);
        return ;
    }
    k-=arr[n-1];
    if(k<=arr[n-2]){
        solve(n-2);
        return ;
    }
    k-=arr[n-2];
    if(k<=arr[n-3]){
        solve(n-3);
        return ;
    }
}

int main()
{
    arr[0]=1,arr[1]=1,arr[2]=1;
    for(int i=3; i<=36; i++)
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];

    while(cin>>n>>k){
        if(k>arr[n]) cout<<-1<<endl;
        else solve(n);
    }
    return 0;
}
