#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[2000],check[2000];

int main()
{
    int t,keep,n,m,k,q,r,s,a,b,c;
    string str;
    while(cin>>n){
        int chk=0;
        for(int i=1; i<=n; i++){
            scanf("%1d",&arr[i]);
        }
        int ind=1,num=0;
        while(!arr[ind]){
            ++num;
            ++ind;
        }
        //cout<<"  "<<num<<endl;
        if(num>1){
            cout<<"No"<<endl;
            continue;
        }
        ind=n,num=0;
        while(!arr[ind]){
            --ind;
            ++num;
        }
        if(num>1){
            cout<<"No"<<endl;
            continue;
        }
        arr[0]=abs(arr[1]-1);
        arr[n+1]=abs(arr[n]-1);
        for(int i=1; i<=n; i++){
            if(arr[i]==1 && (arr[i-1]==1 || arr[i+1]==1)){
                cout<<"No"<<endl;
                chk=1;
                break;
            }
            if(arr[i]==0 && (arr[i-1]==0 && arr[i+1]==0)){
                cout<<"No"<<endl;
                chk=1;
                break;
            }
        }
        if(chk==0) cout<<"Yes"<<endl;
    }
    return 0;
}
