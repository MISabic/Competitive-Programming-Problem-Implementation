#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100100],forp[100100],forr[100100];

int main()
{
    ll n,t,k,m,p,q,r,s,x,y;

    while(scanf("%I64d %I64d %I64d %I64d",&n,&p,&q,&r)==4){


        for(int i=0; i<n; i++){
            scanf("%I64d",&arr[i]);
        }

        forp[0]=p*arr[0];
        for(int i=1; i<n; i++){
            forp[i]=max(forp[i-1],p*arr[i]);
        }

        forr[n-1]=r*arr[n-1];
        for(int i=n-2; i>=0; i--){
            forr[i]=max(forr[i+1],r*arr[i]);
        }

        //for(int i=0; i<n; i++) cout<<forp[i]<<"    "<<forr[i]<<endl;

        ll chidori = forp[0]+q*arr[0]+forr[0];

        for(int i=0; i<n; i++){
            ll res=forp[i]+q*arr[i]+forr[i];
            if(res>chidori){
                chidori=res;
            }
        }
        printf("%I64d\n",chidori);
    }
    return 0;
}


