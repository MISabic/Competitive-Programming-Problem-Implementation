#include<bits/stdc++.h>
using namespace std;

vector<char>vec;

void backtrack(string str,int pos,int n)
{
    if(vec.size()==n){
        for(int i=0; i<vec.size(); i++)
            cout<<vec[i];
        cout<<endl;
        return ;
    }
    for(int i=pos; i<str.length(); i++){
        //char ch=str[i];
        vec.push_back(str[i]);
        backtrack(str,i+1,n);
        char ch=vec.back();
        vec.pop_back();
        while(str[i+1]==ch) i++;
    }
}

int main()
{
    string str;
    int n;
    while(cin>>str>>n){
        vec.clear();
        sort(str.begin(),str.end());
        backtrack(str,0,n);
    }
    return 0;
}
