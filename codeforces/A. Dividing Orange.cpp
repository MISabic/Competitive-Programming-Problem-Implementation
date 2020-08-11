#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,taken[1000];
    while(cin>>n>>k){
        vector<int>vec[k+5];
        memset(taken,0,sizeof(taken));
        for(int i=0; i<k; i++){
            cin>>x;
            vec[i].push_back(x);
            taken[x]=1;
        }
        for(int i=0; i<k; i++){
            for(int j=0; j<vec[i].size(); j++){
                cout<<vec[i][j]<<" ";
            }
            int cnt=vec[i].size();

            for(int j=1; j<=n*k && cnt<n; j++){
                if(taken[j]==0){
                    cout<<j<<" ";
                    taken[j]=1;
                    ++cnt;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

