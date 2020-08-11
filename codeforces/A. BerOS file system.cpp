#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag;
    string str;
    while(cin>>str){
        flag=0;

        int con=0,till=0;
        for(int i=str.length()-1; i>=0; i--)
            if(isalpha(str[i])){
                till=i;
                break;
            }

        for(int i=0; i<=till; i++){
            if(isalpha(str[i])){
                cout<<str[i];
                flag=0;
            }
            else if(flag==0){
                cout<<str[i];
                flag=1;
            }
        }

        cout<<endl;
    }
    return 0;
}
