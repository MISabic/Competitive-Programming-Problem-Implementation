#include<bits/stdc++.h>
#define max 10010
using namespace std;

int arr[max];
vector<int>prime;

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
    prime.push_back(2);
    for(int i=3; i<max; i+=2){
        if(arr[i]==0)
            prime.push_back(i);
    }
}

int main()
{
    seive();
    int n,k;
    map<int,int>mp;
    for(int i=0; i<prime.size(); i++){
        k=0;
        for(int j=i; j<prime.size(); j++){
            k+=prime[j];
            if(k>10000) break;
            mp[k]++;
        }
    }
    while(cin>>n && n)
        cout<<mp[n]<<endl;
    return 0;
}
