#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,k;
    char ch;
    while(scanf("%I64d %I64d",&n,&x)==2){
        long long c=0;
        for(long long i=0; i<n; i++){
            scanf(" %c %I64d",&ch,&k);
            if(ch=='+'){
                x+=k;
            }
            else{
                if(x-k<0) ++c;
                else x-=k;
            }
        }
        printf("%I64d %I64d\n",x,c);
    }
    return 0;
}
