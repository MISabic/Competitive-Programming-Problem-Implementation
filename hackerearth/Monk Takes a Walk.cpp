#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int con=0;
        for(int i=0; i<str.length(); i++){
            if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u')
                ++con;
        }
        cout<<con<<endl;
    }
    return 0;
}
