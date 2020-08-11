#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,test=0;
    string str,alp="abcdefghijklmnopqrstuvwxyz";
    cin>>n;
    while(n--){
        if(test==0){
            getc(stdin);
            test=1;
        }
        getline(cin,str);

        map<char,int>mp;
        for(int i=0; i<str.length(); i++)
            if(isalpha(str[i]))
                mp[tolower(str[i])]=1;
        if(mp.size()==26)
            cout<<"pangram"<<endl;
        else{
            cout<<"missing ";
            for(int i=0; i<alp.length(); i++){
                int f=0;
                for(int j=0; j<str.length(); j++){
                    if(alp[i]==tolower(str[j]))
                        f=1;
                }
                if(f==0) cout<<alp[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
