#include<bits/stdc++.h>
#define max 35768
using namespace std;

int arr[max],chk[max],res[max];
vector<int>prime;

void seive()
{
    memset(arr,0,sizeof(arr));
    arr[1]=1;
    for(int i=4; i<max; i+=2)
        arr[i]=1;
    int sqrtn=(int)sqrt(max);
    for(int i=3; i<=sqrtn; i+=2)
    {
        if(arr[i]==0){
            for(int j=i*i; j<max; j+=i+i){
                arr[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<max; i+=2){
        if(arr[i]==0)
            prime.push_back(i);
    }
}

int main()
{
    seive();
    int n;
    while(cin>>n && n){
        int con=0;
        for(int i=0; i<prime.size() && prime[i]<=n/2; i++){
            if(arr[n-prime[i]]==0){
                ++con;
            }
        }
        cout<<con<<endl;
    }
    return 0;
}
