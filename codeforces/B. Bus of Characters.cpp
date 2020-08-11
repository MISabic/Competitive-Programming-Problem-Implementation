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
        int o=0,sum=0,ok=0,tot=0;
        pair<int, int> p[200200];
        for(int i=0; i<n; i++){
            cin>>k;
            p[i]={k,i+1};
        }
        sort(p,p+n);
        //for(int i=0; i<n; i++) cout<<p[i].first<<"  "<<p[i].second<<endl;
        cin>>str;
        int intro=0, extro=0;
        vector<int>vec;
        vector<int>ls;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='0'){
                cout<<p[intro].second<<" ";
                ls.push_back(intro);
                ++intro;
            }
            else{
                cout<<p[ls[ls.size()-1]].second<<" ";
                ls.pop_back();
            }
        }
        cout<<endl;
    }
    return 0;
}

