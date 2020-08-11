#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    while(cin>>n>>k){
        long long res=k-1,flag=0;
        if(n<k || n==1 || (n>2 && k==2)){
            cout<<-1<<endl;
            continue;
        }
        n=n-k;
        cout<<k-1+2*n<<endl;
    }
    return 0;
}
