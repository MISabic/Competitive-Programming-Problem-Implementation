#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
int arr[100005],brr[900005];
int main()
{
    int n,k,p;
    while(scanf("%d %d",&n,&k)==2){
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int l=p=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int total=0;
                for (int k=i; k<=j; k++){
                    total+=arr[k];
                }
                ++p;
                if(p>900000) break;
                brr[l++]=total;
            }
        }
        sort(brr,brr+l,greater<int>());
        for(int i=0; i<k; i++){
            printf("%d",brr[i]);
            (i==k-1) ? printf("\n") : printf(" ");
        }
    }
    return 0;
}
