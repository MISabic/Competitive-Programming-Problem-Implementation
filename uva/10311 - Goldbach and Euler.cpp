#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<vector>
#define max 100000005
using namespace std;

int arr[max];
vector<int>prime;

void seive()
{
    memset(arr,0,sizeof(arr));
    arr[1]=1;
    prime.push_back(2);
    int n=sqrt(max);
    for(int i=3; i<=n; i+=2){
        if(arr[i]==0){
            prime.push_back(i);
            for(int j=i*i; j<max; j+=i+i){
                arr[j]=1;
            }
        }
    }
    for(int i=9975; i<max; i+=2)
        if(arr[i]==0)
            prime.push_back(i);
}

int main()
{
    seive();
    ios_base::sync_with_stdio(false);
    int t,n,i,k=0;
    while(scanf("%d",&n)==1){
        int flag=0;
        if(n%2==1)
        {
            if(n==1 || arr[n-2]==1) printf("%d is not the sum of two primes!\n",n);
            else printf("%d is the sum of 2 and %d.\n",n,n-2);
            continue;
        }
        int h=n/2;
        if(h%2==0) h-=1;
        for(i=h; i>0; i-=2){
            if(arr[i]==0)
              break;
        }

        vector<int>::iterator it=lower_bound(prime.begin(),prime.end(),i);
        for(it; it>=prime.begin(); it--){
            if((n-*it)!=*it && arr[n-*it]==0 && (n-*it)%2!=0){
                flag=1;
                break;
            }
        }
        if(flag==0) printf("%d is not the sum of two primes!\n",n);
        else printf("%d is the sum of %d and %d.\n",n,*it,n-*it);
    }
    return 0;
}
