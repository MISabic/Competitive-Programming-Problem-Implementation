#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long c, n, x, y;
    scanf("%lld",&c);
    for(long long i=1; i<=c; i++){
        scanf("%lld",&n);
        long long low=1, high=32000000, mid;
        while(low<=high){
            mid=(high+low)/2;
            if(((mid-1)*(mid-1))<n && n<=((mid)*(mid))){
                break;
            }
            if(n>((mid)*(mid))){
                low=mid;
            }
            else if(n<=(mid*mid)){
                high=mid;
            }
        }
        long long temp=((mid-1)*(mid-1))+ceil(((mid*mid)-((mid-1)*(mid-1)))/2.0);
        if(temp==n){
            x=y=mid;
        }
        else if(mid%2==0){
            if(n>temp){
                x=mid;
                y=mid-(n-temp);
            }
            else{
                x=mid-(temp-n);
                y=mid;
            }
        }
        else if(mid%2==1){
            if(n>temp){
                x=mid-(n-temp);
                y=mid;
            }
            else{
                x=mid;
                y=mid-(temp-n);
            }
        }
        printf("Case %lld: %lld %lld\n",i,x,y);
    }
    return 0;
}
