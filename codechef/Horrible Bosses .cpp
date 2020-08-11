#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int t,arr[10];
    while(scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3])==4){
        int flag=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i!=j){
                    if(arr[i]+arr[j]>=arr[3]){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1) break;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
