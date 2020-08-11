// not solved

#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b)
{
    double x=a.first/double(a.second);
    double y=b.first/double(b.second);
    return (x < y);
}

int main()
{
    int t,n,d;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&d);
        pair<int,int>pi[n+5];

        for(int j=0; j<n; j++){
            scanf("%d %d",&pi[j].first,&pi[j].second);
        }

        sort(pi,pi+n,comp);

        int p=0,m=0;
        for(int j=d; j<n; j++){
            p+=pi[j].first,m+=pi[j].second;
        }
        printf("Case %d: %.10lf\n",i,double(p)/m*100);
    }
    return 0;
}
