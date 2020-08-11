#include<bits/stdc++.h>
using namespace std;

int arr[1000010];

int main()
{
    int t,n,c=0;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0,ans=0,k=0;
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
            if(arr[i]<0) ++k;
        }   //cout<<k<<"   "<<n<<endl;
        if(k==n-1){
            cout<<"Route "<<++c<<" has no nice parts"<<endl;
            continue;
        }
        int currStartIndex=0,diff=-1,startIndex,endIndex;
        for(int i=0; i<n-1; i++){
            sum+=arr[i];
            if(sum<0){
                sum=0;
                currStartIndex=i+1;
            }//cout<<"hello  ::  "<<ans<<endl;
            if(sum>=ans){
                if(ans==sum && i-currStartIndex>diff){
                    startIndex=currStartIndex;
                    endIndex=i;
                    diff=i-currStartIndex;
                }
                else if(sum>ans){
                    ans=sum;
                    startIndex=currStartIndex;
                    endIndex=i;
                    diff=i-currStartIndex;
                }
            }
        }
        //cout<<ans<<"     "<<startIndex<<"     "<<endIndex<<endl;
        cout<<"The nicest part of route "<<++c<<" is between stops "<<startIndex+1<<" and "<<endIndex+2<<endl;
    }
    return 0;
}
