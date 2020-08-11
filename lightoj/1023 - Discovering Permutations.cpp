#include<bits/stdc++.h>
using namespace std;

int t,n,k,cnt,taken[30];

void permutation(string str,string per,int n)
{
    if(cnt==k) return ;
    if(per.length()==str.length()){
        ++cnt;
        cout<<per<<endl;
    }

    for(int i=0; i<str.length(); i++){
        if(!taken[i]){
            taken[i]=1;
            permutation(str,per+str[i],n+1);
            taken[i]=0;
            per=per.substr(0,str.length()-1);
        }
    }
}

int main()
{
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&k);

        string str;
        memset(taken,0,sizeof(taken));
        cnt=0;

        for(int j=65; j<65+n; j++)
            str+=char(j);

        printf("Case %d:\n",i);
        permutation(str,"",0);
    }
}
