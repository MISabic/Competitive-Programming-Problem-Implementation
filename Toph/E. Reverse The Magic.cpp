#include<bits/stdc++.h>
using namespace std;

int arr[100100],test[100100],test1[100100],check[100100];
stack<int>res;

int main()
{
    int t,n,m,a,b;
    cin>>t;
    while(t--){
        map<pair<int,int>,int>mp;
        vector< pair<int,int> >vec;
        vector<int>bs;
        memset(arr,-1,sizeof(arr));
        memset(test,0,sizeof(test));
        memset(test1,0,sizeof(test1));
        memset(check,0,sizeof(check));
        int flag=0;
        cin>>n>>m;
        for(int i=0; i<m; i++){
            cin>>a>>b;
            if(mp[make_pair(a,b)]==0 && arr[a]!=-1 && test[a]!=1){  //cout<<a<<"    "<<arr[a]<<endl;
                flag=1;
            }
            else if(test[a]==1){        //cout<<" pick "<<flag<<endl;     cout<<a<<"    "<<b<<endl;
                if(a!=b) flag=1;
            }
            else{
                if(a!=b){
                    arr[a]=b;
                    arr[b]=-10;
                    test1[a]=1;
                    test[b]=1;
                }
            }
            if(a==b){
                test1[a]=1;
                test[b]=1;
                check[a]=1;
            }
            mp[make_pair(a,b)]=1;
        }


        for(int i=0; i<n; i++){
            if(test1[i]==1 && test[i]==1 && check[i]!=1){
                flag=1;
            }
        }

        if(n==1) printf("Yes\n");
        else if(flag==1) printf("No\n");
        else if(arr[0]!=n-1) printf("No\n");
        else{

            for(int i=0; i<n; i++){
                if(arr[i]!=-1){
                    if(res.empty()){
                        res.push(i);
                    }
                    else if(arr[res.top()]!=i){
                        res.push(i);
                    }
                    else if(arr[i]==-10){
                        while(arr[res.top()]==i){
                            res.pop();
                            if(res.empty()) break;
                        }
                    }
                }
            }

            if(res.empty()) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
