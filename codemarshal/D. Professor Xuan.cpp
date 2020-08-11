#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int num=0;
    while(n!=0){
        num=(num*10)+n%10;
        n/=10;
    }
    return num;
}

int func(int n)
{
    if(n==0) return 0;
    return abs(n-rev(n))+func(abs(n-rev(n)));
}

int main()
{
    int t,m,c=0,k,arr[1050];
    for(int i=0; i<1005; i++){
        arr[i]=func(i);
    }
    int mo=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        k=0;
        for(int j=0; j<=m; j++)
            if(arr[j]>k) k=arr[j];
        cout<<k<<endl;
    }
    return 0;
}

