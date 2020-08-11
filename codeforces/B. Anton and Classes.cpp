#include<bits/stdc++.h>
using namespace std;

pair<long long,long long>p1[200200];
pair<long long,long long>p2[200200];
pair<long long,long long>p3[200200];
pair<long long,long long>p4[200200];

int main()
{
    long long t,n,m,p,q,l,r,s,k,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>p1[i].second>>p1[i].first;
            p3[i].second=p1[i].first,p3[i].first=p1[i].second;
        }
        cin>>m;
        for(int i=0; i<m; i++){
            cin>>p2[i].first>>p2[i].second;
            p4[i].second=p2[i].first,p4[i].first=p2[i].second;
        }
        sort(p1,p1+n);
        sort(p2,p2+m,greater< pair<long long,long long> >());
        int i=0,j=0;
        long long mx=0;

        /*for(int i=0; i<m; i++){
            cout<<p[i].first<<"    "<<p1[i].second<<endl;;

        }*/

        while(((p1[i].first>=p2[j].first && p1[i].first<=p2[j].second) || (p1[i].first>p2[j].first && p1[i].first>p2[j].second)) && i!=n && j!=m){
            ++i,++j;
        }

        //cout<<i<<"    "<<j<<endl;

        if(p1[i].first<p2[j].first && p1[i].first<p2[j].second && i!=n && j!=m){
            mx=abs(p1[i].first-p2[j].first);
        }

        sort(p3,p3+n,greater< pair<long long,long long> >());
        sort(p4,p4+m);
        i=0,j=0;

        while(((p4[i].first>=p3[j].first && p4[i].first<=p3[j].second) || (p4[i].first>p3[j].first && p4[i].first>p3[j].second)) && i!=m && j!=n){
            ++i,++j;
        }

        if(p4[i].first<p3[j].first && p4[i].first<p3[j].second && i!=n && j!=m){
            mx=max(mx,abs(p4[i].first-p3[j].first));
        }

        cout<<mx<<endl;
    }
    return 0;
}

