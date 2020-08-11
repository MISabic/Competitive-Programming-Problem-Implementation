#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        unordered_map<int,int>ump;
        queue< pair<string,int> >q;
        q.push({"1",0});
        while(!q.empty()){
            string x=q.front().first;
            int sz=x.length(),r=0;
            r=(q.front().second*10+(x[sz-1]-'0'))%n;
            q.pop();
            if(ump[r]==1) continue;
            if(r==0){
                printf("%s\n",x.c_str());
                break;
            }
            else{
                q.push({x+"0",r});
                q.push({x+"1",r});
                ump[r]=1;
            }
        }
    }
    return 0;
}
