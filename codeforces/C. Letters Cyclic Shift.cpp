#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define rep(i,n) for(int i=0; i<n; i++)
#define ll long long
#define pf printf
#define sf scanf
using namespace std;

int main()
{
    //read;
    int n,b,d;
    while(sf("%d %d %d",&n,&b,&d)==3){
        int k,sum=0,s1=0,s2=0;
        for(int i=0; i<n; i++){
            scanf("%d",&k);
            if(k<=b) s1+=k;
            if(s1>d){
                s1=0;
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}


