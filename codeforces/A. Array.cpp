#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[105];
    int n,i;
    while(scanf("%d",&n)==1){
        int k=0,p=0,l=0;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[p++]);
            if(arr[p-1]==0)
                ++k,--p;
        }
        sort(arr,arr+p);
        for(int i=0; i<p; i++){
            if(arr[i]<0) ++l;
        }
        printf("1 %d",arr[0]);
        if(l&1){
            printf("\n%d",p-1);
            for(int i=1; i<p; i++)
                printf(" %d",arr[i]);
            printf("\n%d",k);
            for(int i=0; i<k; i++) cout<<" 0";
            printf("\n");
        }
        else{
            printf("\n%d",p-2);
            for(int i=2; i<p; i++)
                printf(" %d",arr[i]);
            printf("\n%d %d",k+1,arr[1]);
            for(int i=0; i<k; i++) cout<<" 0";
            printf("\n");
        }
    }
    return 0;
}
