#include<bits/stdc++.h>
using namespace std;

int divisors[2010010];

int main()
{
    for(int i=3; i<1000005; i++){
        for(int j=1; j<333335 && (i*j)<1000005; j++){
            divisors[i*j]++;
        }
    }
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        int res=0;
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                for(int k=1; k<=c; k++){
                    if((i*j*k)%2==0) res++;
                    res+=(divisors[i*j*k]+1);
                    //res=(res%1073741824)+(divisors[i*j*k]+1)%1073741824;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
