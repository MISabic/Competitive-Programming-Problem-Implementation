#include<stdio.h>
#include<stdlib.h>
#define MAX 999999999999999LL

int main()
{
    long long n,m,i,arr[50505],b,start,end,mid,k1,k2;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
        scanf(" %lld",&arr[i]);
    arr[n]=MAX;
    scanf("%lld",&m);
    for(i=0; i<m; i++)
    {
        scanf("%lld",&b);
        if(b<=arr[0])
            k1=(-1);
        else{
            start=0, end=n;
            while(start<=end){
                mid=(start+end)/2;
                if(arr[mid]<b && arr[mid+1]>=b)
                    break;
                if(arr[mid]>=b)
                    end=mid;
                else if(arr[mid]<b && arr[mid+1]<=b)
                    start=mid;
            }
            k1=mid;
        }
        if(b>=arr[n-1]){
            if(k1==-1)
                printf("X X\n");
            else
                printf("%lld X\n",arr[k1]);
            continue;
        }
        else{
            start=0, end=n;
            while(start<=end){
                mid=(start+end)/2;
                if(arr[mid]>b && arr[mid-1]<=b)
                    break;
                if(arr[mid]<=b)
                    start=mid;
                else if(arr[mid]>b && arr[mid-1]>=b)
                    end=mid;
            }
            k2=mid;
        }
        if(k1==-1)
            printf("X %lld\n",arr[k2]);
        else
            printf("%lld %lld\n",arr[k1],arr[k2]);
    }
    return 0;
}
