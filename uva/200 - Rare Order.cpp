#include<bits/stdc++.h>
using namespace std;

vector<int>vec[100];
stack<char>st;
int visited[100];

void order(int v)
{
    visited[v]=1;
    for(int i=0; i<vec[v].size(); i++){
        if(!visited[vec[v][i]]){
            order(vec[v][i]);
        }
    }
    st.push(v+'A');
}

int main()
{
    memset(visited,0,sizeof(visited));
    string temp,str;
    cin>>temp;
    int src=temp[0]-'A',c=1;;
    while(cin>>str && str[0]!='#'){
        ++c;
        for(int i=0; i<str.length(); i++){
            if(i==temp.length()) break;
            if(str[i]!=temp[i]){
                vec[temp[i]-'A'].push_back(str[i]-'A');
                break;
            }
        }
        temp=str;
    }
    if(c==1){
        cout<<temp<<endl;
        return 0;
    }
    order(src);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}
