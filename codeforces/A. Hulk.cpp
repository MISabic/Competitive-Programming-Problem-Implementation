#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","r",stdin);
    int n,k;
    while(scanf("%d",&n)==1){
            int t=0;
        while(++t){
            if(t>n) break;
            if(t%2==1) printf("I hate");
            else printf("I love");
            if(t==n) printf(" it\n");
            else printf(" that ");
        }
    }
    return 0;
}
