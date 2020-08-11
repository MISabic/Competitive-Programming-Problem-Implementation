#include<cstdio>

int main()
{
    int t,a,b,c=0,arr[25]={1,9,45,55,99,297,703,999,2223,2728,4950,5050,7272,7777,9999,17344,22222,77778,82656,95121,99999};
    while(scanf("%d %d",&a,&b)==2){
        int flag=0;
        for(int i=0; i<21; i++){
            if(arr[i]<=b && arr[i]>=a){
                printf("%d ",arr[i]);
                flag=1;
            }
        }
        if(flag==0) printf("INVALID RANGE");
        printf("\n");
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long p,q,n,k,s,z;
    for(long long i=1; i<100000; i++){
        n=i*i;
        int s=0,z=1;
        k=(int)log10(n)+1;
        for(int j=1; j<=ceil(k/2.0); j++){
            s+=(n%10)*z;
            n/=10;
            z*=10;
        }
        s+=n;
        if(s==i)
            printf("%d\n",i);
    }
    return 0;
}
*/
