#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[101010];
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int low=0,high=n-1,c1=arr[0],c2=arr[n-1],a=0,b=0;
        while(low<=high){
            if(c1<=c2){
                low++;
                c1+=arr[low];
                ++a;
            }
            else if(c2<=c1){
                high--;
                c2+=arr[high];
                ++b;
            }
            else{
                low++,high--;
                c1+=arr[low],c2+=arr[high];
                if(low!=high)
                    ++a,++b;
                else if(low==high)
                    ++a;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
