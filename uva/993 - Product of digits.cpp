#include<bits/stdc++.h>
using namespace std;

long long res(long long n)
{
    long long num=0,flag=0,ans=0;
    while(n!=1){
        flag=0;
        for(int i=9; i>1; i--){
            if(n%i==0){
                num=num*10+i;
                n/=i;
                flag=1;
                break;
            }
        }
        if(flag==0) return -1;
    }
    while(num!=0){
        ans=(ans*10)+num%10;
        num/=10;
    }
    return ans;
}

int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n/10==0){
            cout<<n<<endl;
        }
        else if(n%10==0){
            cout<<res(n)<<endl;
        }
        else{
            if(res(n)==-1)
                cout<<-1<<endl;
            else
                cout<<res(n)<<endl;
        }
    }
    return 0;
}
