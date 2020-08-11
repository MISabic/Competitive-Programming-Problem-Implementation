#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,x,y,c=0,arr[2005];
    scanf("%d",&t);
    while(t--){
        int count=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0; i<n-2; i++){ //n-2; because i'll work with 3 points
            for(int j=i+1; j<n-1; j++){ //n-1; because i'll work with 2 points
                int k=arr[i]+arr[j]; //if k==0 or k<the third length of stick then the area would be 0 and negative number respectively
                x=(int)(lower_bound(arr,arr+n,k)-arr);
                count+=(x-j-1);
            }
        }
        printf("Case %d: %d\n",++c,count);
    }
    return 0;
}
