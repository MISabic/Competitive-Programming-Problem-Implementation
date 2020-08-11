#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,flag=0,c=0,i;
    string str;
    cin>>t;
    while(t--){
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        getline(cin,str);
        printf("Case %d: ",++c);
        if(str.length()<6){
            cout<<str<<endl;
            continue;
        }
        for(i=0; i<str.length()-5; i++){
            if(((i-1>=0 && !isalpha(str[i-1])) || i==0) && ((i+6<=str.length() && !isalpha(str[i+6])) || i+5==str.length()-1) &&
               str[i]=='S' && str[i+1]=='h' && str[i+2]=='a' && str[i+3]=='r' && str[i+4]=='i' && str[i+5]=='f'){
                    cout<<"Officer";
                    i+=5;
                }
            else{
                cout<<str[i];
            }
        }
        for(i; i<str.length(); i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}

