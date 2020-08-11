#include<bits/stdc++.h>
using namespace std;

long long arr[300300];

int main()
{
    long long n,x,a,b,c;
    while(cin>>n){
        long long total=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            total+=arr[i];
        }
        sort(arr,arr+n,greater<long long>());
        long long money=0;
        double mx=-1,res1,res2;
        for(int i=0; i<n; i++){
            money+=arr[i];
            double x=((i+1)/(double)n)*100;
            double y=(money/(double)total)*100;
            if((y-x)>mx){
                mx=y-x;
                res1=x;
                res2=y;
            }
        }
        printf("%.1f\n%.14f\n",res1,res2);
    }
    return 0;
}

