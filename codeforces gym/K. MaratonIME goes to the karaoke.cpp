#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,arr[100010];
    string str;
    while(cin>>str){
        int c=0;
        for(int i=1; i<str.length(); i++){
            if(str[i]==str[i-1]){
                ++c;
            }
            else{
                cout<<str[i-1]<<c+1;
                c=0;
            }
        }
        cout<<str[str.length()-1]<<c+1<<endl;
    }
    return 0;
}
