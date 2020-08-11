#include<bits/stdc++.h>
#define mx 100010
using namespace std;

int arr[mx];

int divisors()
{
    for(int i=1; i<mx; i++){
        for(int j=i; j<mx; j+=i){
            if(i!=j) arr[j]+=i;
            //if(j==12) cout<<i<<"     "<<j<<"   "<<arr[j]<<endl;
        }
    }
}

int main()
{
    divisors();
    int t,n,a,val;
    vector<pair<int,int> >vec;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(arr[a]>a){
                vec.push_back(make_pair(arr[a]-a,a));
            }
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int> >());
        //for(int i=0; i<vec.size(); i++)
          //   cout<<vec[i].second<<" "<<vec[i].first<<endl;
        if(vec.size()==0){
            cout<<-1<<endl;
        }
        else{
            val=9999999;
            for(int i=0; i<vec.size(); i++){
                if(vec[0].first!=vec[i].first) break;
                if(vec[i].second<val)
                    val=vec[i].second;
            }
            cout<<val<<" "<<vec[0].first<<endl;
        }
        vec.clear();
    }
    //cout<<arr[2]<<endl;
    return 0;
}
