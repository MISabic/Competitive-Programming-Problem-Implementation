#include<bits/stdc++.h>
#define d(a) cout<<a<<endl;
using namespace std;

int main()
{
    int t,n,k,v,arr[10000],keep[10000];
    scanf("%d",&t);
    while(t--){
        for(int i=0; i<10000; i++)
            arr[i]=0,keep[i]=0;
        int p=-1;
        scanf("%d %d",&n,&k);
        for(int i=1; i<=n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]>p) p=arr[i];
            keep[arr[i]]++;
        }
        int c=0;
        for(int i=1; i<=p; i++){
            if(keep[i]>=k && arr[i]!=i){
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
