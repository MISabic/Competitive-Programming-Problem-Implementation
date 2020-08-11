#include<bits/stdc++.h>
using namespace std;

bool valid(string str,tuple<unordered_map<char,int>,unordered_map<char,int>,unordered_map<char,int>> constraint[],int n)
{
    for(int i=0; i<n; i++){
        int cnt=0;
        if(get<0>(constraint[i])[str[0]]) ++cnt;
        if(get<1>(constraint[i])[str[1]]) ++cnt;
        if(get<2>(constraint[i])[str[2]]) ++cnt;
        if(cnt==3) return false;
    }
    return true;
}

int main()
{
    int t,n;
    string src,dest,a,b,c;

    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>src>>dest>>n;

        tuple<unordered_map<char,int>,unordered_map<char,int>,unordered_map<char,int>> constraint[n+5];

        for(int j=0; j<n; j++){
            cin>>a>>b>>c;

            for(auto x:a) get<0>(constraint[j])[x]=1;
            for(auto x:b) get<1>(constraint[j])[x]=1;
            for(auto x:c) get<2>(constraint[j])[x]=1;
        }

        int flag=0,res;
        unordered_map<string,int>ump;
        queue<pair<string,int>>q;
        if(valid(src,constraint,n)) q.push({src,0});

        while(!q.empty()){
            string str=q.front().first;
            res=q.front().second;
            //cout<<str<<endl;
            if(str==dest){
                flag=1;
                break;
            }
            q.pop();

            string temp=(str[0]=='z'?'a':char(str[0]+1))+str.substr(1,2);
            if(valid(temp,constraint,n) && ump[temp]!=1){
                ump[temp]=1;
                q.push({temp,res+1});
            }

            temp=(str[0]=='a'?'z':char(str[0]-1))+str.substr(1,2);
            if(valid(temp,constraint,n) && ump[temp]!=1){
                ump[temp]=1;
                q.push({temp,res+1});
            }

            temp=str.substr(0,1)+(str[1]=='z'?'a':char(str[1]+1))+str.substr(2,1);
            if(valid(temp,constraint,n) && ump[temp]!=1){
                ump[temp]=1;
                q.push({temp,res+1});
            }

            temp=str.substr(0,1)+(str[1]=='a'?'z':char(str[1]-1))+str.substr(2,1);
            if(valid(temp,constraint,n) && ump[temp]!=1){
                ump[temp]=1;
                q.push({temp,res+1});
            }

            temp=str.substr(0,2)+(str[2]=='z'?'a':char(str[2]+1));
            if(valid(temp,constraint,n) && ump[temp]!=1){
                ump[temp]=1;
                q.push({temp,res+1});
            }

            temp=str.substr(0,2)+(str[2]=='a'?'z':char(str[2]-1));
            if(valid(temp,constraint,n) && ump[temp]!=1){
                ump[temp]=1;
                q.push({temp,res+1});
            }
        }
        if(flag) printf("Case %d: %d\n",i,res);
        else printf("Case %d: -1\n",i);
    }
}
