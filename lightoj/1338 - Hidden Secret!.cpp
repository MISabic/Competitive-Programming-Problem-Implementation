#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    string str1,str2;
    cin>>c;
    getc(stdin);
    for(int i=1; i<=c; i++){
        map<char,int>mp1,mp2;

        getline(cin,str1);
        for(int j=0; j<str1.length(); j++){
            if(str1[j]!=' ') ++mp1[tolower(str1[j])];
        }
        getline(cin,str2);
        for(int j=0; j<str2.length(); j++){
            if(str2[j]!=' ') ++mp2[tolower(str2[j])];
        }
        map<char,int>::iterator it;
        int flag=0;
        for(it=mp1.begin(); it!=mp1.end(); it++){
            if(mp2[it->first] < it->second){
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"Case "<<i<<": Yes"<<endl;
            continue;
        }

        flag=0;
        for(it=mp2.begin(); it!=mp2.end(); it++){
            if(mp1[it->first] < it->second){
                flag=1;
                break;
            }
        }
        if(!flag) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
