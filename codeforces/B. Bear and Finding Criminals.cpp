#include<cstdio>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    int n,k,i,arr[1000];
    while(scanf("%d %d",&n,&k)==2){
        for(i=1; i<=n; i++){
            scanf("%d",&arr[i]);
        }
        int c=0;
        if(arr[k]==1) ++c;
        for(i=1; ; i++){
            if((k-i)<=0 || (k+i)>n) break;
            if((k-i)>=0 && (k+i)<=n){
                if(arr[k-i]==1 && arr[k+i]==1){
                    c+=2;
                }
            }
        }
        if((k-i)<=0)
            for(int j=k+i; j<=n; j++)
                if(arr[j]==1)
                    ++c;
        if((k+i)>n)
            for(int j=0; j<=k-i; j++)
                if(arr[j]==1)
                    ++c;
        cout<<c<<endl;
    }
    return 0;
}

