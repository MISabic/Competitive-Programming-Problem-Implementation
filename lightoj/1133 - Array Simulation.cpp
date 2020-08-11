#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,m,v,p;
    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        scanf("%d %d",&n,&m);
        vector<int>arr;
        char ch;
        for(int j=0; j<n; j++){
            scanf("%d",&v);
            arr.push_back(v);
        }
        for(int j=0; j<m; j++){
            scanf(" %c",&ch);
            if(ch=='S'){
                scanf("%d",&v);
                for(int k=0; k<n; k++) arr[k]+=v;
            }
            else if(ch=='M'){
                scanf("%d",&v);
                for(int k=0; k<n; k++) arr[k]*=v;
            }
            else if(ch=='D'){
                scanf("%d",&v);
                for(int k=0; k<n; k++) arr[k]/=v;
            }
            else if(ch=='R'){
                reverse(arr.begin(),arr.end());
            }
            else{
                scanf("%d %d",&v,&p);
                swap(arr[v],arr[p]);
            }
        }
        printf("Case %d:\n",i);
        for(int j=0; j<n; j++){
            printf("%d",arr[j]);
            if(j!=n-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
