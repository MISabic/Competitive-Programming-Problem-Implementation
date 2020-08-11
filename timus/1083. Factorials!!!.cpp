#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    char arr[25];
    while(scanf("%lld %s",&n,&arr)==2){
        int k=strlen(arr),m=n,c=1;
        if(n%k==0){
            while((n-c*k)>=k){
                m*=(n-c*k);
                ++c;
            }
        }
        else{
            while((n-c*k)>=(n%k)){
                m*=(n-c*k);
                ++c;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}

