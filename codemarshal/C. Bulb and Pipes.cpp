#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,r,vec[5000],arr[5000],c=0;
    char ch[5000];
    scanf("%d",&t);
    while(t--){
        //cout<<"hello"<<endl;
        scanf(" %d %d",&n,&r);
        for(int i=0; i<n; i++){
            scanf(" %d",&vec[i]);
        }
        for(int i=0; i<n; i++){
            scanf(" %c",&ch[i]);
        }
        memset(arr,0,sizeof(arr));
        int p=n,ind=0;
        arr[ind]=vec[0];
        for(int i=1; i<p; i++){
            if(ch[i-1]==ch[i]){ //cout<<ch[i]<<"    "<<ch[i+1]<<endl;
                arr[ind]+=vec[i];
                //cout<<endl<<ind<<"     "<<arr[ind]<<endl;
            }
            else{
                ++ind;
                arr[ind]=vec[i];
            }
        }
        //cout<<"  hello  "<<ind<<endl;
        n=ind+1;
        /*for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
        }*/
        int k=r*2,counter=0;
        for(int i=0; i<n-1; i++){
            if(arr[i]<=0) continue;
            if(arr[i]%k==0){
                counter+=(arr[i]/k);
                //cout<<" one :: "<<counter<<endl;
            }
            else if(arr[i]%k<=r){
                counter+=(arr[i]/k)+1;
                arr[i+1]-=r;
                //cout<<" two :: "<<counter<<endl;
            }
            else{
                counter+=(arr[i]/k);
                if(arr[i]%k!=0) counter++;
                //cout<<" three :: "<<counter<<endl;
            }
        }
        if(arr[n-1]>0){
            counter+=(arr[n-1]/k);
            if(arr[n-1]%k!=0) counter++;
        }
        printf("Case %d: %d\n",++c,counter);
    }
    return 0;
}
