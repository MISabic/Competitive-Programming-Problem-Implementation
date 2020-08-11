#include <bits/stdc++.h>

using namespace std;

pair<int,int>p1[500000];

bool comp1(const pair<int, int>&i, const pair<int, int>&j)
{
    if(i.first-i.second == j.first-j.second) return i.first > j.first;
    return i.first-i.second < j.first-j.second;
}

int main()
{
    long long t,n,m,q,r,k,arr[100100];
    string str;
    double x,y;
    while(cin>>n>>k){

        for(int i=0; i<n; i++){
            cin>>p1[i].first;
        }
        for(int i=0; i<n; i++){
            cin>>p1[i].second;
        }

        sort(p1,p1+n,comp1);
        long long res1=0,res2=0,res=0,num=0,i=0;

        while(i!=n){
            if(p1[i].first>p1[i].second){
                if(num>=k) break;
            }
            res+=p1[i].first;
            ++num;
            ++i;
        }

        for(int j=i; j<n; j++)
            res+=p1[j].second;
        cout<<res<<endl;
    }
    return 0;
}


