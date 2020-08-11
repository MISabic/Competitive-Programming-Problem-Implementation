#include<bits/stdc++.h>
using namespace std;

int arr[100010],num[100010],parent[100010],con[100010];
priority_queue<int>pq;

int finder(int x)
{
    if(arr[x]==x) return x;
    return arr[x]=finder(arr[x]);
}

void unioner(int a,int b)
{
    int para,parb;
    para=finder(a);
    parb=finder(b);
    if(para==parb)
    {
        con[para]++;
        pq.push(con[para]);
        return;
    }
    if(con[para]==con[parb])
    {
        arr[parb]=para;
        con[para]+=con[parb]+1;
        pq.push(con[para]);
    }
    else if(con[parb]>con[para])
    {
        arr[para]=parb;
        con[parb]+=con[para]+1;
        pq.push(con[parb]);
    }
    else if(con[para]>con[parb])
    {
        arr[parb]=para;
        con[para]+=con[parb]+1;
        pq.push(con[para]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,x,y;
    cin>>n>>m;
    if(m==0){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0; i<=n; i++)
        arr[i]=i;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        unioner(x,y);
    }
    cout<<pq.top()<<endl;
    return 0;
}
