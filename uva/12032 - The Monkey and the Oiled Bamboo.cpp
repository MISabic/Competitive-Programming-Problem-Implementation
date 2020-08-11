#include<cstdio>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    int t,n,i,q,j,p,c=0,r,arr[100005],track[100005];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        if(n==1){
            printf("Case %d: %d\n",++c,arr[0]);
            continue;
        }
        p=0,r=arr[0];
        for(i=1; i<n; i++){
            track[p++]=arr[i]-arr[i-1];
            if(track[p-1]>r) r=track[p-1];
        }
        for(i=r; ; i++){
            int x=i,flag=0;
            if(arr[0]==x) --x;
            for(j=0; j<p; j++){
                if(x<track[j]){
                    flag=1;
                    break;
                }
                if(x==track[j])
                    --x;
            }
            if(flag==0) break;
        }
        printf("Case %d: %d\n",++c,i);
    }
    return 0;
}

