#include<bits/stdc++.h>
using namespace std;

int visited[30],c=0;
vector<char>vec;
vector<int>order[35];
string fline,sline,str,res;

// to check if any variable that is connected with 'n' is already visited which is supposed to come after 'n'
bool is_taken(int n)
{
    for(int i=0; i<order[n].size(); i++){
        if(visited[order[n][i]])
            return false;
    }
    return true;
}

void backtrack(int pos)
{
    if(vec.size()==str.length()){
        for(int i=0; i<vec.size(); i++) cout<<vec[i];
        cout<<'\n';
        return ;
    }
    for(int i=0; i<str.length(); i++){
        if((str[i]-'a')!=pos && visited[str[i]-'a']==0 && is_taken(str[i]-'a')){

            visited[str[i]-'a']=1;
            vec.push_back(str[i]);
            backtrack(str[i]-'a');
            vec.pop_back();
            visited[str[i]-'a']=0;

        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(getline(cin,fline)){
        if(c) cout<<'\n';
        else c=1;

        /** reset */
        vec.clear();
        for(int i=0; i<30; i++) order[i].clear();
        memset(visited,0,sizeof(visited));
        /** end */

        str="";
        for(int i=0; i<fline.length(); i+=2)
            str+=fline[i];

        sort(str.begin(),str.end());

        getline(cin,sline);
        for(int i=0; i<sline.length(); i+=4){
            order[sline[i]-'a'].push_back(sline[i+2]-'a');
        }

        for(int i=0; i<str.length(); i++){
            memset(visited,0,sizeof(visited));
            visited[str[i]-'a']=1;
            vec.clear();
            vec.push_back(str[i]);
            backtrack(str[i]-'a');
            visited[str[i]-'a']=0;
        }
    }
    return 0;
}
