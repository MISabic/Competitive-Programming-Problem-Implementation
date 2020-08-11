#include<bits/stdc++.h>
#define max 1000005
using namespace std;

int arr[max],num[max];

void divisors()
{
    memset(arr,0,sizeof(arr));
    for(int i=1; i<max/2; i++){
        for(int j=i; j<max; j+=i){
            ++arr[j];
        }
    }
    int n=0,k;
    for(int i=1; i<max; i++){
        if(arr[i]>=n){
            n=arr[i];
            k=i;
            num[i]=k;
        }
        else num[i]=k;
    }
}

int main()
{
    divisors();
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",num[n]);
    }
    return 0;
}
