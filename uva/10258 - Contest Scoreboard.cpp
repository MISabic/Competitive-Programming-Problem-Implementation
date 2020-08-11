#include<bits/stdc++.h>
using namespace std;

struct ds{
    int tm,sl,pt;
};

bool comp(ds a, ds b)
{
    if(a.sl==b.sl && a.pt == b.pt)
        return (b.tm > a.tm);
    if(b.sl == a.sl)
        return (b.pt > a.pt);
    return (b.sl < a.sl);
}

int main()
{
    int n,c,s,t,team[111][11],track[111][11],res[111],sol[111],tm[111];
    char ch,arr[1000];
    ds contestant[111];
    scanf("%d",&n);
    getc(stdin);
    gets(arr);
    while(n--){
        memset(track,0,sizeof(track));
        memset(team,0,sizeof(team));
        memset(res,0,sizeof(res));
        memset(sol,0,sizeof(sol));
        memset(tm,0,sizeof(tm));
        while(gets(arr)){
            if(strcmp(arr,"")==0) break;
            sscanf(arr,"%d %d %d %c",&c,&s,&t,&ch);
            tm[c]=1;
            if(ch=='I'){
                team[c][s]++;
            }
            else if(ch=='C' && track[c][s]!=1){
                track[c][s]=1;
                res[c]+=t;
                sol[c]++;
                if(team[c][s]!=0)
                    res[c]+=team[c][s]*20;
            }
        }
        int con=0;
        for(int i=0; i<111; i++){
            if(tm[i]!=0){
                contestant[con].tm=i,contestant[con].sl=sol[i],contestant[con].pt=res[i];
                ++con;
            }
        }
        sort(contestant,contestant+con,comp);
        for(int i=0; i<con; i++)
            cout<<contestant[i].tm<<" "<<contestant[i].sl<<" "<<contestant[i].pt<<endl;
        if(n!=0) cout<<endl;
    }
    return 0;
}
