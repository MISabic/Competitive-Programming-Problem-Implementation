#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,k,i,j,n,x,arr[4],c=0;
    cin>>t;
    while(t--){
        k=0;
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        if((arr[0]==0 || arr[1]==0 || arr[2]==0 || arr[3]==0) && (arr[0]+arr[1]+arr[2]+arr[3])<4){
            printf("Case %lld: 0\n",++c);
            continue;
        }
        sort(arr,arr+4);
        if(arr[0]*3<=arr[3]){
            k+=arr[0];
            arr[3]-=(arr[0]*3);
            arr[0]=0;
        }
        else{
            for(i=1; i<4; i++){
                arr[i]-=arr[0];
            }
            k+=arr[0];
        }
        sort(arr,arr+4);
        //if(arr[1]*)
        if(arr[1]*2<=arr[3]){
            k+=arr[1];
            arr[3]-=arr[1]*2;
            arr[2]-=arr[1];
            arr[1]=0;
        }
        else{
            x=arr[3]/2;
            k+=x;
            arr[3]-=x*2;
            arr[2]-=x;
            arr[1]-=x;
            if(arr[1]!=0 && arr[2]!=0 && arr[3]!=0 && arr[1]+arr[2]+arr[3]>=4){
                arr[3]=0;
                arr[2]-=2;
                arr[1]--;
                k++;
            }
        }
        sort(arr,arr+n);
        if(arr[2]+arr[3]>=4){
            x=arr[3]/3;
            if(arr[2]-x<=0){
                arr[3]-=arr[2]*3;
                k+=arr[2];
                arr[2]=0;
            }
            else{
                arr[3]-=x*3;
                arr[2]-=x;
                k+=x;
            }
        }
        if(arr[2]+arr[3]>=4){
            x=arr[3]/2;
            if(arr[2]-x<=0){
                arr[3]-=arr[2]*2;
                k+=arr[2];
                arr[2]=0;
            }
            else{
                arr[3]-=x*2;
                arr[2]-=x;
                k+=x;
            }
        }
        printf("Case %lld: %lld\n",++c,k);
    }
    return 0;
}
