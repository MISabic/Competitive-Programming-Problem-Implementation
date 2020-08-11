#include<bits/stdc++.h>
using namespace std;

string com,str,ch;

map<string,int>mp;
string arr[35000];

int main()
{
    int n,c=0;
    cin>>n;
    while(n--){
        cin>>com>>str;
        if(com=="create"){
            if(mp[str]!=0)
                cout<<"ERROR"<<endl;
            else{
                mp[str]= ++c ;
                arr[c]=str;
                cout<<"OK"<<endl;
            }
        }
        else if(com=="change"){
            cin>>ch;
            if(arr[mp[str]]!=str || mp[ch]!=0)
                cout<<"ERROR"<<endl;
            else{
                mp[ch]=mp[str];
                arr[mp[ch]]=ch;
                cout<<"OK"<<endl;
            }
        }
        else if(com=="search"){
            if(mp[str]!=0)
                cout<<arr[mp[str]]<<endl;
            else
                cout<<"ERROR"<<endl;
        }
    }
    return 0;
}

