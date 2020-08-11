#include<stdio.h>

int main()
{
    int t,n,q,q1,q2,i,k1,k2,high,low,mid,c=0,arr[200005];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        printf("Case %d:\n",++c);
        while(q--){
            scanf("%d %d",&q1,&q2);
            if(q1>arr[n-1] || q2<arr[0]){
                printf("0\n");
                continue;
            }
            high=0,low=n-1;
            while(high<=low){
                mid=(high+low)/2;
                if(arr[mid]==q1 || arr[mid]>=q1 && (mid-1)<0 || arr[mid]>=q1 && arr[mid-1]<q1){
                    k1=mid;
                    break;
                }
                if(arr[mid]>=q1){
                    low=mid-1;
                }
                else{
                    high=mid+1;
                }
            }
            high=0,low=n-1;
            while(high<=low){
                mid=(high+low+1)/2;
                if(arr[mid]==q2 || arr[mid]<=q2 && (mid+1)>n-1 || arr[mid]<=q2 && arr[mid+1]>q2){
                    k2=mid;
                    break;
                }
                if(arr[mid]<=q2){
                    high=mid+1;
                }
                else{
                    low=mid-1;
                }
            }
            printf("%d\n",(k2-k1)+1);
        }
    }
    return 0;
}
