#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int t,n,arr[166000],prime[16000];
    memset(arr,0,sizeof(arr));
    int k=sqrt(165000),c=0;
    for(int i=3; i<=k; i+=2){
        if(arr[i]==0){
            for(int j=i*i; j<165000; j+=i+i)
                arr[j]=1;
        }
    }
    prime[1]=2,k=1;
    for(int i=3; i<165000; i+=2)
        if(arr[i]==0)
            prime[++k]=i;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        cout<<prime[n]<<endl;
    }
}
