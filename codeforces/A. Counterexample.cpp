#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main()
{
    long long a,b,i,j,l;
    while(scanf("%I64d %I64d",&a,&b)==2){
        int flag=0,g=0;
        for(i=a; i<=b; i++){
            for(j=i+1; j<=b; j++){
                if(__gcd(i,j)==1){
                    for(l=j+1; l<=b; l++){
                        if(__gcd(j,l)==1 && __gcd(i,l)!=1){//cout<<i<<"    "<<j<<endl;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1) break;
            }
            if(flag==1) break;
        }
        if(flag==1)
            printf("%I64d %I64d %I64d\n",i,j,l);
        else
            printf("-1\n");
    }
    return 0;
}
