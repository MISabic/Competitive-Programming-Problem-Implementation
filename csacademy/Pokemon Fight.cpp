#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,arr[100010],brr[100010];
    while(cin>>a>>b){
        for(long long i=0; i<a; i++)
            cin>>arr[i];
        sort(arr,arr+a);
        for(long long i=0; i<b; i++)
            cin>>brr[i];
        sort(brr,brr+b);
        long long p=0,q=0;
        while(p<a && q<b){
            if(arr[p]>brr[q]){
                arr[p]=0;
                ++p;
                ++q;
            }
            else{
                ++p;
            }
        }
        if(q!=b) cout<<-1<<endl;
        else{
            long long c=0;
            for(long long i=0; i<a; i++){
                c+=arr[i];
            }
            cout<<c<<endl;
        }
    }
}
