#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,f;
    while(cin>>n){
        pair<int,int>pi[1111];
        for(int i=0; i<n; i++){
            cin>>x>>y;
            pi[i].first=x,pi[i].second=y;
        }
        for(int i=0; i<n; i++){
            f=0;
            for(int j=0; j<n; j++){
                if(i!=j && (pi[i].first<=pi[j].first || pi[i].second<=pi[j].second)){
                    f=1;
                    break;
                }
            }
            if(f==0){
                f=2;
                cout<<i+1<<endl;
                break;
            }
        }
        if(f!=2) cout<<-1<<endl;
    }
}
