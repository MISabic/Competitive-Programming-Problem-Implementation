#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,con;
    while(cin>>n>>con){
        int arr[n+5],mx[n+5],mn[n+5],vec[n+5],summin=0,summax=0;
        memset(vec,0,sizeof(vec));
        for(int i=0; i<n; i++){
            cin>>mn[i]>>mx[i];
            summin+=mn[i];
            summax+=mx[i];
        }
        if(con<summin || con>summax){
            cout<<"NO"<<endl;
            continue;
        }
        con-=summin;
        for(int i=0; i<n; i++){
            if((con-(mx[i]-mn[i]))>=0){
                vec[i]=(mx[i]-mn[i]);
                con-=(mx[i]-mn[i]);
            }
            else if(con<=(mx[i]-mn[i])){
                vec[i]=con;
                con=0;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            printf("%d ",vec[i]+mn[i]);
        }
        printf("\n");
    }
    return 0;
}

