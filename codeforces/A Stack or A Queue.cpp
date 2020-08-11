#include<cstdio>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,k,i,k1,k2,arr[105],brr[105];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=0; i<n; i++)
            scanf("%d",&brr[i]);
        k1=k2=0;
        for(i=0; i<n; i++){
            if(arr[i]!=brr[i]){
                k1=1;
                break;
            }
        }
        reverse(arr,arr+n);
        for(i=0; i<n; i++){
            if(arr[i]!=brr[i]){
                k2=1;
                break;
            }
        }
        if(k1==1 && k2==1) printf("neither\n");
        else if(k1==1 && k2==0) printf("stack\n");
        else if(k1==0 && k2==1) printf("queue\n");
        else printf("both\n");
    }
    return 0;
}
