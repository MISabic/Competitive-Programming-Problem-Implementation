#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>str;
        int flag=0;
        for(int j=0; j<str.length()/2; j++){
            if(str[j]!=str[str.length()-j-1]){
                flag=1;
                break;
            }
        }
        if(!flag) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
