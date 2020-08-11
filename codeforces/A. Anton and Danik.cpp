#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<int> vec;
    string str;
    int n;
    while(cin>>n>>str){
        int a=0,d=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='A') a++;
            else d++;
        }
        if(a==d) cout<<"Friendship"<<endl;
        else if(a>d) cout<<"Anton"<<endl;
        else cout<<"Danik"<<endl;
    }
    return 0;
}
