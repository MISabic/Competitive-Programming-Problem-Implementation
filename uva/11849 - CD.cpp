#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    map<int,int>arr;
    while(scanf("%d %d",&n,&m)==2){
        if(n==0 && m==0) break;
        for(int i=0; i<n; i++){
            scanf("%d",&k);
            arr[k]=1;
        }
        int c=0;
        for(int i=0; i<m; i++){
            scanf("%d",&k);
            if(arr[k])
                ++c;
        }
        printf("%d\n",c);
        arr.clear();
    }
    return 0;
}
