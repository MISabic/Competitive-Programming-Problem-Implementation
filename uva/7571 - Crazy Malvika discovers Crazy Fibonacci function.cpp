#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

int main()
{
    long long n,a,b,c,k;
    cin>>n;
    while(n--){
        scanf("%lld %lld %lld",&a,&b,&k);
        long long con=3,arr[100];
        arr[1]=a,arr[2]=b;
        while(1){

            long long k1=a,k2=b;

            if(a<0)
                a=(a%m)+m;
            else
                a=(a%m);

            if(b<0)
                b=(b%m)+m;
            else
                b=(b%m);

            c=(b-a);

            a=b;
            b=c;
            if(con==6) arr[0]=c;
            else arr[con]=c;
            con++;
            if(con>6) break;
        }


        if(arr[(k%6)]<0)
            cout<< (arr[(k%6)]%m)+m <<endl;
        else
            cout<< (arr[(k%6)]%m) <<endl;
    }
    return 0;
}
