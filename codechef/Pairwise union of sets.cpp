#include<bits/stdc++.h>
using namespace std;

int t,n,k,len,v,arr[2505][10010];

int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        unordered_set<int>st[n+5];
        for(int i=0; i<n; i++){
            scanf("%d",&len);
            for(int j=0; j<len; j++){
                scanf("%d",&v);
                arr[i][v]=1;
                st[i].insert(v);
            }
        }
        int res=0;
        for(int i=0; i<n; i++){
            int sz=st[i].size();
            for(int j=i+1; j<n; j++){
                int add=0;
                for(auto x:st[j]){
                    if(arr[i][x]==0){
                        ++add;
                    }
                }
                if(sz+add==k) ++res;
            }
        }
        printf("%d\n",res);
        memset(arr,0,sizeof(arr));
    }
    return 0;
}
