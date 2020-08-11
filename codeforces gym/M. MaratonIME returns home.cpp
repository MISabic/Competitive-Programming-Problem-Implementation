#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,q,a,b;
    char arr[1010][1010];
    while(cin>>n>>m){
        priority_queue<int>pq;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        int f=0,c=0;
        for(int i=0; i<n; i++){
            if(f==0){
                f=1;
                for(int j=0; j<m; j++){
                    if(arr[i][j]=='.'){
                        ++c;
                    }
                    else if(arr[i][j]=='L'){
                        pq.push(c);
                        c=0;
                    }
                }
            }
            else{
                f=0;
                for(int j=m-1; j>=0; j--){
                    if(arr[i][j]=='.'){
                        ++c;
                    }
                    else if(arr[i][j]=='L'){
                        pq.push(c);
                        c=0;
                    }
                }
            }
        }
        pq.push(c);
        cout<<pq.top()<<endl;
    }
    return 0;
}
