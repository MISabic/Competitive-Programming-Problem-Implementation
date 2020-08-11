#include<bits/stdc++.h>

using namespace std;

int par[30],sz[30];

int finder(int x)
{
    if(par[x]==x) return x;
    return par[x]=finder(par[x]);
}

void unioner(int a,int b)       // based on set size
{
    int para,parb;
    para=finder(a);
    parb=finder(b);
    if(para==parb)
    {
        //sz[para]++;
        return;
    }
    if(sz[para]==sz[parb])
    {
        par[parb]=para;
        sz[para]+=sz[parb]+1;
    }
    else if(sz[parb]>sz[para])
    {
        par[para]=parb;
        sz[parb]+=sz[para]+1;
    }
    else if(sz[para]>sz[parb])
    {
        par[parb]=para;
        sz[para]+=sz[parb]+1;
    }
}

int main()
{
    int n,k;
    string str,ch;
    //cout<<(int)'F'-64<<endl;
    scanf("%d\n\n",&n);
    while(n--){
        for(int i=0; i<=27; i++)     // important part - initialization
            par[i]=i;
        getline(cin,ch);
        k=(int)ch[0]-65;
        while(getline(cin,str) && !str.empty()){
            unioner((int)str[0]-65,(int)str[1]-65);
        }
        set<int>st;
        for(int i=0; i<=k; i++){
            st.insert(finder(i));
        }
        cout<<st.size()<<endl;
        if(n!=0) cout<<endl;
    }
    return 0;
}
