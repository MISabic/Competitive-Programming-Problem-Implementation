#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b)
{
    if(a.second==b.second) return a.first<=b.first;
    return a.second<b.second;
}

int main()
{
    int t,a,b,i;
    cin>>t;
    while(t--){
        pair<int,int>pi[1000];
        int con=1,n=0;
        while(cin>>a>>b && (a || b)){
            pi[n].first=a,pi[n].second=b;
            ++n;
        }
        sort(pi,pi+n,comp);
        int temp=pi[0].second;
        for(int i=1; i<n; i++){    //cout<<pi[i].first<<"   "<<pi[i].second<<endl;
            if(pi[i].first>=temp){   //cout<<pi[i].first<<"   "<<pi[i].second<<endl;
                temp=pi[i].second;
                ++con;
            }
        }
        cout<<con<<endl;
    }
    return 0;
}
