#include<bits/stdc++.h>
using namespace std;

long long t,n,m,k,p,q,r,s,u,v,arr[1000100];

bool check(int k)
{
    int rem,past=0;
    while(k!=0){
        rem=k%2;
        k/=2;
        if(rem==1 && past==1) return false;
        past=rem;
    }
    return true;
}

int main()
{
    int c=0;
    vector<int>vec;
    for(int i=1; i<=90000; i++){
        if(check(i)) vec.push_back(i);
    }
    while(cin>>n){
        cout<<vec[n-1]<<endl;
    }
    return 0;
}

