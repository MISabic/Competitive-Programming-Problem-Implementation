#include<bits/stdc++.h>
using namespace std;

int t,n,arr[11]={0,1,4,9,16,25,36,49,64,81},k=0,keep;

int sqdig(int n)
{
    int sum=0;
    while(n!=0){
        sum+=arr[n%10];
        n/=10;
    }
    return sum;
}

int main()
{
    cin>>t;
    while(t--){
        scanf("%d",&n);
        keep=n;
        if((floor(log10(n))+1)==1) n=arr[n];
        while((floor(log10(n))+1)>1){
            n=sqdig(n);
        }
        if(n==1) printf("Case #%d: %d is a Happy number.\n",++k,keep);
        else printf("Case #%d: %d is an Unhappy number.\n",++k,keep);
    }
    return 0;
}
