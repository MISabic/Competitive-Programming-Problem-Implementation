#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,res,l,m,arr[1000];
    while(cin>>n>>k){
        map<int,int>keep;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<k; i++){
            cin>>l>>m;
            int pos=0,neg=0;
            for(int j=l; j<=m; j++){
                if(arr[j-1]<=0)
                    neg+=arr[j-1];
                else
                    pos+=arr[j-1];
            }

            if(pos+neg>=0){
                for(int j=l; j<=m; j++){
                    keep[j-1]++;
                }
            }
        }
        res=0;
        for(int i=0; i<n; i++)
            res+=(arr[i]*keep[i]);
        cout<<res<<endl;
    }
    return 0;
}
