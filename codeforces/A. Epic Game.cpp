#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,g,flag;
    while(scanf("%d %d %d",&a,&b,&n)==3){
        flag=0;
        while(n>0){
            if(flag==0){
                n -= __gcd(a,n);
                flag=1;
            }
            else{
                n -= __gcd(b,n);
                flag=0;
            }
        }
        (flag==0) ? cout<<1<<endl : cout<<0<<endl;
    }
    return 0;
}
