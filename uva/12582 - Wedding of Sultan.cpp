#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    string str;
    cin>>t;
    while(t--){
        int vec[100][100];
        stack<int>st;
        map<char,int>mp;
        cin>>str;
        int i=0;
        memset(vec,0,sizeof(vec));
        for(int i=0; i<str.length(); i++)
            mp[str[i]]=1;
        st.push(str[i]);
        while(!st.empty()){
            char x=st.top();
            ++i;
            if(str[i]==x){
                st.pop();
            }
            else{
                vec[((int)x)-65][(((int)str[i])-65)]=1;
                vec[((int)str[i])-65][(((int)x)-65)]=1;
                st.push(str[i]);
            }
        }
        printf("Case %d\n",++c);
        for(int i=0; i<26; i++){
            int c=0;
            for(int j=0; j<26; j++){
                if(vec[i][j]==1)
                    ++c;
            }
            if(mp[(char)i+65]==1)
                printf("%c = %d\n",(char)i+65,c);
        }
    }
    return 0;
}
