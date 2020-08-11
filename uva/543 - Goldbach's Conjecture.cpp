#include<bits/stdc++.h>
#define max 1000005
using namespace std;

int arr[max];

void seive()
{
    memset(arr,0,sizeof(arr));
    int sqrtn=(int)sqrt(max);
    for(int i=3; i<=sqrtn; i+=2)
    {
        if(arr[i]==0){
            for(int j=i*i; j<max; j+=i+i){
                arr[j]=1;
            }
        }
    }
}

int main()
{
    seive();
    int n,i;
    while(cin>>n && n){
        int flag=0,high=(!((n/2)&1))?(n/2)-1:(n/2);
        for(int i=3; i<=n/2; i+=2)
            if(arr[i]==0 && arr[n-i]==0){
                printf("%d = %d + %d\n",n,i,n-i);
                flag=1;
                break;
            }
        if(flag==0) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
