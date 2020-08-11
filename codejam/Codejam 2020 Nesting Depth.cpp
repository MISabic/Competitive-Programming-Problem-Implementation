#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>str;

        cout<<"Case #"<<i<<": ";

        for(int j=0; j<(str[0]-'0'); j++) cout<<'(';

        int sz=str.length();
        for(int j=1; j<sz; j++){

            if(str[j-1]>str[j]){
                cout<<str[j-1];
                for(int k=0; k<(str[j-1]-str[j]); k++){
                    cout<<')';
                }
            }
            else if(str[j-1]<str[j]){
                cout<<str[j-1];
                for(int k=0; k<(str[j]-str[j-1]); k++){
                    cout<<'(';
                }
            }
            else cout<<str[j-1];
        }
        cout<<str[sz-1];
        for(int j=1; j<=(str[sz-1]-'0'); j++) cout<<')';

        cout<<endl;
    }
    return 0;
}

