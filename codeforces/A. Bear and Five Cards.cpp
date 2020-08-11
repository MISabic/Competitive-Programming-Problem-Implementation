#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5],k;
    while(scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4])==5){
        int p=0,max=0;
        sort(arr,arr+5);
        for(int i=4; i>=0; i--){
            k=count(arr,arr+5,arr[i]);
            if(k>3) k=3;
            if((arr[i]*k)>max && (k==2 || k==3)){
                max=arr[i]*k;
            }
        }
        for(int i=0; i<5; i++)
            p+=arr[i];
        cout<<p-max<<endl;
    }
    return 0;
}
