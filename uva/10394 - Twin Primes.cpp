#include<bits/stdc++.h>
#define max 20000005
using namespace std;

int arr[max];
vector<int>primes;

void seive()
{
    arr[0]=2;
    int n=sqrt(max);
    for(int i=3; i<=n; i+=2){
        if(arr[i]==0){
            for(int j=i*i; j<max; j+=i+i){
                arr[j]=1;
            }
        }
    }
    for(int i=3; i<max; i+=2)
        if(arr[i]==0 && arr[i+2]==0)
            primes.push_back(i);
}

int main()
{
    seive();
    int n;
    while(scanf("%d",&n)==1)
        printf("(%d, %d)\n",primes[n-1],primes[n-1]+2);
    return 0;
}
